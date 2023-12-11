```
#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

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
    assert (issame(arr1, pluck(arr1, 0)));
    return 0;
}
```