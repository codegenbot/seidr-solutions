```cpp
#include <vector>
#include <iostream>

using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> result;
    for (int i = 0; i < n; i++) {
        if (i == n - 1 || arr[i] >= arr[i + 1]) {
            result.push_back(arr[i]);
        }
    }
    return result;
}

int main() {
    vector<int> arr = {10, 6, 8, 20, 6, 4, 3, 2};
    vector<int> leadersVector = leaders(arr);
    for (int i : leadersVector) {
        cout << i << " ";
    }
    return 0;
}