```cpp
#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int n = arr.size();
    int maxSoFar = arr[n-1];
    for(int i=n-1; i>=0; i--) {
        if(arr[i] >= maxSoFar) {
            maxSoFar = arr[i];
            result.push_back(arr[i]);
        }
    }
    return result;
}

int main() {
    vector<int> arr = {1, 3, 4, 2, 6};
    vector<int> leadersRes = leaders(arr);
    for (int leader : leadersRes) {
        cout << leader << " ";
    }
    return 0;
}