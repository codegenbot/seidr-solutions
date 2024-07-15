```cpp
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int max_right = arr.back();
    for (int i = arr.size() - 1; i >= 0; i--) {
        if (arr[i] >= max_right) {
            max_right = arr[i];
            result.push_back(max_right);
        }
    }
    reverse(result.begin(), result.end());
    return result;
}

int main() {
    vector<int> arr = {11, 823, 993, 413, 170, 694, 357, 233, 736, 573, 159, 746};
    vector<int> leaders_result = leaders(arr);
    for (int leader : leaders_result) {
        cout << leader << " ";
    }
    return 0;
}