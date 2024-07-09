```cpp
#include <vector>
#include <algorithm>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> result;
    int max_right = arr[n-1];
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] >= max_right) {
            max_right = arr[i];
            result.push_back(max_right);
        }
    }
    reverse(result.begin(), result.end());
    return result;
}

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> result;
    int max_right = arr[n-1];
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] >= max_right) {
            max_right = arr[i];
            result.push_back(max_right);
        }
    }
    reverse(result.begin(), result.end());
    return result;
}

int main() {
    vector<int> arr = {5, 2, 3, 4};
    vector<int> result = leaders(arr);
    for (int i : result) {
        cout << i << endl;
    }
    return 0;
}