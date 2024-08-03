#include <vector>
#include <cassert>
#include <iostream>

bool below_threshold(const std::vector<int>& l, int t) {
    for (int num : l) {
        if (num >= t) {
            return false;
        }
    }
    return true;
}

int main() {
    std::vector<int> nums = {1, 8, 4, 10};
    int threshold = 10;
    bool result = below_threshold(nums, threshold);
    
    std::cout << std::boolalpha << result << std::endl;
    
    return 0;
}