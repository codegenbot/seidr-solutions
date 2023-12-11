```
#include <iostream>
#include <vector>

bool issame(const vector<int>& a, const vector<int>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

void pluck(const vector<int>& arr, int index) {
    if (index >= 0 && index < arr.size()) {
        auto it = arr.begin() + index;
        arr.erase(it, it + 1);
    }
}

int main() {
    vector<int> arr1{7, 9, 7, 1};
    vector<int> arr2{7, 9, 7, 1};
    if (issame(arr1, arr2)) {
        cout << "The two arrays are the same." << endl;
    } else {
        cout << "The two arrays are not the same." << endl;
    }
    pluck(arr1, 0);
    return 0;
}
```