#include <vector>
#include <algorithm>

int add_elements(vector<int> arr, int k) {
    vector<int> temp;
    for (int i = 0; i < min(k, (int)arr.size()); i++) {
        if (to_string(arr[i]).size() <= 2) {
            temp.push_back(arr[i]);
        }
    }
    return accumulate(temp.begin(), temp.end(), 0);
}