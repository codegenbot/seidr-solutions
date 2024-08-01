```cpp
#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> leaders;
    
    int maxRight = arr[n-1];
    for(int i=n-1; i>=0; i--) {
        if(arr[i] >= maxRight) {
            leaders.push_back(arr[i]);
            maxRight = arr[i];
        }
    }
    
    return leaders;
}

int main() {
    vector<int> arr = {17, 28, 4, 27, 29, 30};
    vector<int> leaders_result = leaders(arr);
    for (int leader : leaders_result) {
        cout << leader << " ";
    }
    return 0;
}