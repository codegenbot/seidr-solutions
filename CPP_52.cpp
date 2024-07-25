#include <iostream>
#include <vector>
#include <cassert>

bool below_threshold(const std::vector<int>& values, int threshold) {
    for (int value : values) {
        if (value >= threshold) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(!below_threshold({1, 8, 4, 10}, 10));
    
    // Additional test cases can be added here
    
    return 0;
}