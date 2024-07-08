#include <iostream>
#include <vector>
#include <cassert>

bool below_threshold(const std::vector<int>& l, int t) {
    for (int num : l) {
        if (num >= t) {
            return false;
        }
    }
    return true;

}

int main() {
    int numbers_size = 4; 
    std::vector<int> numbers(numbers_size);
    numbers = {1, 8, 4, 10};
    assert(below_threshold(numbers, 6));
}