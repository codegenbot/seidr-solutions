#include <array>

bool below_threshold(std::array<int, n> l, int t) {
    for (int num : l) {
        if (num >= t) {
            return false;
        }
    }
    return true;
}