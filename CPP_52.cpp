#include <vector>
#include <iostream>

bool below_threshold(std::vector<int> l, int t) {
    for (int i : l) {
        if (i >= t) {
            return false;
        }
    }
    return true;
}

int main() {
    std::vector<int> numbers = {1, 8, 4, 10};
    int threshold = 10;

    assert(not(below_threshold(numbers, threshold)));

    return 0;
}