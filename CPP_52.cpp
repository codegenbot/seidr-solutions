#include <cassert>
#include <vector>

bool below_threshold(std::vector<int> l, int t);

int main() {
    assert(!below_threshold({1, 8, 4, 10}, 10));
}

bool below_threshold(std::vector<int> l, int t) {
    for (int num : l) {
        if (num >= t) {
            return false;
        }
    }
    return true;
}