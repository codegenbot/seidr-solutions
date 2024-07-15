#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> remove_duplicates(const std::vector<int>& vec) {
    std::vector<int> result;
    for (int num : vec) {
        if (std::find(result.begin(), result.end(), num) == result.end()) {
            result.push_back(num);
        }
    }
    return result;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) {
        return false;
    }

    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }

    return true;
}

int main() {
    assert(issame(remove_duplicates({1, 2, 3, 2, 4, 3, 5}), {1, 2, 3, 4, 5}));
}