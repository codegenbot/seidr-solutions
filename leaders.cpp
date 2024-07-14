```cpp
#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> leaders;
    int n = arr.size();
    int max_right = arr[n - 1];
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] >= max_right) {
            leaders.push_back(arr[i]);
            max_right = arr[i];
        }
    }
    reverse(leaders.begin(), leaders.end());
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