```
#include <vector>
#include <cassert>

bool issame(const vector<int>& a, const vector<int>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<int> pluck(const vector<int>& arr) {
    int smallestEven = INT_MAX;
    int smallestIndex = -1;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < smallestEven) {
            smallestEven = arr[i];
            smallestIndex = i;
        }
    }

    if (smallestIndex != -1) {
        return vector<int>{smallestEven, smallestIndex};
    } else {
        return vector<int>();
    }
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    assert(issame(pluck(arr), vector<int>{2, 0}));
    return 0;
}
```