#include <vector>
#include <string>
#include <cassert>

int specialFilter(std::vector<int> nums){
    int count = 0;
    for (int num : nums) {
        if (num > 10) {
            std::string numStr = std::to_string(num);
            if ((numStr.front() - '0') % 2 != 0 && (numStr.back() - '0') % 2 != 0) {
                count++;
            }
        }
    }
    return count;
}

void testSpecialFilter() {
    assert(specialFilter({}) == 0);
    assert(specialFilter({12, 25, 8, 17, 39}) == 2);
    assert(specialFilter({11, 22, 33, 44, 55}) == 0);
    assert(specialFilter({123, 456, 789, 101}) == 2);
}

int main() {
    testSpecialFilter();
    return 0;
}