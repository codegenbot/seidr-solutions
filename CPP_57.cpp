#include <iostream>
#include <vector>
#include <cassert>

bool monotonic(const std::vector<int>& l) {
    bool increasing = false;
    bool decreasing = false;
    for (int i = 1; i < l.size(); i++) {
        if (l[i] < l[i - 1]) {
            increasing = true;
        }
        if (l[i] > l[i - 1]) {
            decreasing = true;
        }
    }
    return !increasing || !decreasing;
}