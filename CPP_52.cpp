```cpp
#include <iostream>
#include <vector>

bool below_threshold(std::vector<int>, int);

int main_test() {
    assert(not(below_threshold({1, 8, 4, 10}, 10)));
    return 0;
}

bool below_threshold(std::vector<int> l, int t) {
    for (int num : l) {
        if (num >= t) {
            return false;
        }
    }
    return true;
}