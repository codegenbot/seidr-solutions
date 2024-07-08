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
    std::vector<int> numbers(10); // Limit the size of the input array
    for (int i = 0; i < 10; i++) {
        numbers[i] = i + 1;
    }
    assert(not(below_threshold(numbers, 10)));
    return 0;
}