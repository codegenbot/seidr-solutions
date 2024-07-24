```cpp
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> maximum(vector<int> arr, int k) {
    vector<int> result;
    for (int i = 0; i < k; i++) {
        auto it = max_element(arr.begin(), arr.end());
        result.push_back(*it);
        arr.erase(it);
    }
    return result;

}

int main() {
    int n, k;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }
    cout << "Enter k: ";
    cin >> k;
    vector<int> result = maximum(arr, k);
    cout << "Maximum elements are: ";
    for (int i = 0; i < k; i++) {
        cout << result[i] << " ";
    }
    return 0;
}