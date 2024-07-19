#include <vector>
#include <cassert>

bool below_threshold(std::vector<int> l, int t) {
    for (int num : l) {
        if (num >= t) {
            return true;
        }
    }
    return false;
}

int main() {
    assert(!below_threshold({1, 8, 4, 10}, 10));
    return 0;
}