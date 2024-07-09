#include <algorithm>
#include <vector>
#include <cassert>

std::vector<int> sort_third(std::vector<int> l) {
    std::vector<int> result = l;
    for (int i = 0; i < result.size(); i++) {
        if (i % 3 == 0) {
            std::sort(result.begin() + i, result.begin() + i + 3);
        }
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(sort_third({5, 6, 3, 4, 8, 9, 2, 1}), {2, 6, 3, 4, 8, 9, 5, 1}));
    return 0;
}