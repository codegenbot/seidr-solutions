#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> sort_third(const std::vector<int>& l) {
    std::vector<int> temp = l;
    for (size_t i = 2; i < l.size(); i += 3) {
        if (i + 1 < l.size()) {
            std::sort(temp.begin() + i - 2, temp.begin() + i + 2);
        } else {
            std::sort(temp.begin() + i - 2, temp.end());
        }
    }
    return temp;
}

int main() {
    assert(issame(sort_third({5, 6, 3, 4, 8, 9, 2, 1}), {2, 6, 3, 4, 8, 9, 5, 1}));
    return 0;
}