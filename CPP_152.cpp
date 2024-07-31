#include <vector>
#include <cassert>

std::vector<int> issame(const std::vector<int>& a, const std::vector<int>& b) {
    std::vector<int> res;
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] == b[i]) res.push_back(1);
        else res.push_back(0);
    }
    return res;
}

int main() {
    assert(issame({1, 2, 3, 5}, {-1, 2, 3, 4}) == std::vector<int>{0, 1, 1, 0});
    return 0;
}