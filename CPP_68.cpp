
#include <vector>
#include <cassert>

bool issame(const pmr::vector<int>& a, const pmr::vector<int>& b) {
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

pmr::vector<int> pluck(const pmr::vector<int>& arr) {
    int smallestEven = INT_MAX;
    int smallestIndex = -1;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < smallestEven) {
            smallestEven = arr[i];
            smallestIndex = i;
        }
    }

    if (smallestIndex != -1) {
        return pmr::vector<int>{smallestEven, smallestIndex};
    } else {
        return {};
    }
}

int main() {
    pmr::vector<int> a = {7, 9, 7, 1};
    assert(issame(a, {}));
    return 0;
}