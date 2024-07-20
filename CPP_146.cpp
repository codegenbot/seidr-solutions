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
    assert(specialFilter({12, 23, -15, 8, 45}) == 2);
    assert(specialFilter({-11, 5, 17, -22, 31}) == 2);
    assert(specialFilter({-10, 10, 0, 11, 22}) == 0);
    return 0;
}