#include <cassert>

bool below_threshold(std::vector<int> l, int t) {
    for (int num : l) {
        if (num >= t) {
            return false;
        }
    }
    return true;
}

void solution() {
    assert(!below_threshold({1, 8, 4, 10}, 11));
}