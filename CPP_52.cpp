#include <iostream>
#include <vector>
#include <cassert>

bool below_threshold(const std::vector<int>& numbers, int threshold) {
    for (int num : numbers) {
        if (num >= threshold) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(!below_threshold({1, 8, 4, 10}, 10));
    
    return 0;
}