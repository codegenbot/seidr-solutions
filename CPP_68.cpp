#include <vector>
#include <algorithm>

std::vector<int> pluck(const std::vector<int>& v) {
    std::vector<int> result;
    for (int x : v) {
        if (x == 7 || x == 1) {
            result.push_back(x);
        }
    }
    return result;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame(pluck({7, 9, 7, 1}), {7, 1}));
    return 0;
}