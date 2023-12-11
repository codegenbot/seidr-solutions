```
#include <vector>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<int> pluck(const std::vector<int>& arr) {
    int smallestEven = INT_MAX;
    int smallestIndex = -1;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < smallestEven) {
            smallestEven = arr[i];
            smallestIndex = i;
        }
    }

    if (smallestIndex != -1) {
        return {smallestEven, smallestIndex};
    } else {
        return {};
    }
}

int main(int argc, char *argv[]) {
    std::vector<int> a = {7, 9, 7, 1};
    assert(issame(pluck({7, 9, 7, 1}), {}));
    return 0;
}
```