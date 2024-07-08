```cpp
#include <iostream>
#include <vector>
#include <cassert>

bool below_threshold(std::vector<int> l, int t);

int main() {
    assert(not(below_threshold({1, 8, 4, 10}, 10)));
    return 0;
}

bool below_threshold(std::vector<int> vec, int threshold) {
    for (int num : vec) {
        if (num >= threshold) {
            return false;
        }
    }
    return true;
}