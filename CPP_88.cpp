#include <vector>
#include <algorithm>

bool isSame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> sortArray(std::vector<int> array) {
    int sum = 0;
    for (auto x : array) {
        sum += x;
    }
    if (sum % 2 == 1) {
        std::sort(array.begin(), array.end());
    } else {
        std::sort(array.rbegin(), array.rend());
    }
    return array;
}

int main() {
    assert(isSame(sortArray({21, 14, 23, 11}), {23, 21, 14, 11}));
    return 0;
}