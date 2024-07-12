#include <vector>
bool below_threshold(std::vector<int> l, int t) {
    for (int x : l) {
        if (x >= t) return false;
    }
    return true;
}