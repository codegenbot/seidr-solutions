#include <vector>
#include <string>

int specialFilter(std::vector<int> nums){
    int count = 0;
    for (int num : nums) {
        if (num > 10) {
            std::string strNum = std::to_string(num);
            if ((strNum.front() - '0') % 2 != 0 && (strNum.back() - '0') % 2 != 0) {
                count++;
            }
        }
    }
    return count;
}

assert(specialFilter({13, 27, 8, 234, 56}) == 2);