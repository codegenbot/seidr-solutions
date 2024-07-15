#include <vector>
#include <iostream>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    for (int i = arr.size() - 1; i >= 0; i--) {
        if (i == arr.size() - 1 || arr[i] >= arr[i + 1]) {
            result.push_back(arr[i]);
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