#include <vector>
#include <cassert>

bool above_threshold(const std::vector<int>& l, int t) {
    for (int num : l) {
        if (num <= t) {
            return false;
        }
    }
    return true;
}