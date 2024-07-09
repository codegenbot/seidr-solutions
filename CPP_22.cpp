```cpp
#include <vector>
#include <algorithm>

std::vector<int> filter_integers(const std::vector<int>& vec) {
    std::vector<int> result;
    for (int val : vec) {
        if (static_cast<bool>(val)) {
            result.push_back(val);
        }
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) return false;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    assert(issame(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3}));
}