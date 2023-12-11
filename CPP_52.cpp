#include <iostream>
#include <vector>

bool below_threshold(std::vector<int> l, int t) {
    for (auto i : l) {
        if (i >= t) {
            return false;
        }
    }
    return true;
}