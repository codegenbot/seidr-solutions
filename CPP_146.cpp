#include <vector>
#include <string>
#include <cassert>

int specialFilter(const std::vector<int>& nums) {
    int count = 0;
    for (int num : nums) {
        if (num > 10) {
            std::string numStr = std::to_string(std::abs(num));
            if (numStr.front() % 2 != 0 && numStr.back() % 2 != 0) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    assert(specialFilter({}) == 0);
    // Add more test cases here
    assert(specialFilter({12, 25, -37, 48}) == 2);
    assert(specialFilter({9, 11, -13, 24}) == 1);
    assert(specialFilter({-15, -27, -30, -42}) == 0);
    
    return 0;
}