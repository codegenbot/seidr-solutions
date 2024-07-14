```cpp
#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> leaders;
    int n = arr.size();
    int maxRightSoFar = arr.back();
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] >= maxRightSoFar) {
            leaders.push_back(arr[i]);
            maxRightSoFar = arr[i];
        }
    }
    return leaders;
}

int main() {
    vector<int> arr = {16, 17, 4, 3, 5, 2};
    vector<int> result = leaders(arr);
    for (int num : result) {
        cout << num << " ";
    }
    return 0;
}