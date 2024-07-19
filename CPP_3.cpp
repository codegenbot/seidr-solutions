#include <iostream>
#include <vector>
#include <cassert>

bool below_zero(const std::vector<int>& arr) {
    for (int num : arr) {
        if (num < 0) {
            return true;
        }
    }
    return false;
}

int main() {
    assert(below_zero({1, -2, 2, -2, 5, -5, 4, -4}) == true);
    
    std::cout << "Test Passed!" << std::endl;
    
    return 0;
}