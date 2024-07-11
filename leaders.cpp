```cpp
#include <vector>
#include <algorithm>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int n = arr.size();
    for (int i = n - 1; i >= 0; --i) {
        if (i == n - 1 || arr[i] >= arr[i + 1]) {
            result.push_back(arr[i]);
        }
    }
    reverse(result.begin(), result.end());
    return result;
}

int main() {
    vector<int> arr = {1, 3, 4, 2};
    vector<int> leadersVector = leaders(arr);
    for (int i : leadersVector) {
        cout << i << " ";
    }
    return 0;
}