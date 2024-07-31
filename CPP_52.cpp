#include <algorithm>
#include <cassert>
#include <vector>

bool below_threshold(const std::vector<int>& l, int t) {
    return std::none_of(l.begin(), l.end(), [t](int num) {
        return num >= t;
    });
}

int main() {
    assert(!below_threshold({1, 8, 4, 10}, 10));
    return 0;
}