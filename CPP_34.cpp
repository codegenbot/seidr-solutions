```cpp
#include <algorithm>
#include <vector>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<int> unique(std::vector<int> l) {
    return std::vector<int>(std::unique_copy(l.begin(), std::unique_end(l.end()), l.begin()));
}