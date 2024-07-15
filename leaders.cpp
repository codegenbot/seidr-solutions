#include <vector>
#include <iostream>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    vector<int> result;
    int maxright = arr.back();
    for (int i = arr.size() - 1; i >= 0; i--) {
        if (arr[i] >= maxright) {
            result.push_back(arr[i]);
            maxright = arr[i];
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