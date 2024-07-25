#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (!(find(b.begin(), b.end(), a[i]) != b.end())) {
            return false;
        }
    }
    return true;
}

vector<int> sort_array(vector<int> arr) {
    vector<int> result;
    while (!issame(result, arr)) {
        bool swapped = false;
        for (int i = 0; i < arr.size() - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                swap(arr[i], arr[i + 1]);
                swapped = true;
            }
        }
        if (!swapped) break;
    }
    return arr;
}