```cpp
#include <vector>

using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> result;
    
    int maxRight = arr[n - 1];
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] >= maxRight) {
            maxRight = arr[i];
            result.push_back(maxRight);
        }
    }
    
    return result;
}

vector<int> leadersResult = leaders({1, 3, 4, 1, 5});
for (int leader : leadersResult) {
    cout << leader << " ";
}
return 0;