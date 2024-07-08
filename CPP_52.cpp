#include <iostream>
#include <vector>
#include <cassert>

bool below_threshold(std::vector<int> l, int t) {
    for (int num : l) {
        if (num >= t) {
            return false;
        }
    }
    return true;
}

int main() {
    std::deque<int> numbers = {1, 8, 4, 10};
    assert(not(below_threshold(numbers, 10)));
    return 0;
}