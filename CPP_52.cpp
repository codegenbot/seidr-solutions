```cpp
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
    std::vector<int> numbers(4); // specify size as 4
    numbers.push_back(1);
    numbers.push_back(8);
    numbers.push_back(4);
    numbers.push_back(10);
    assert(below_threshold(numbers, 6));
}