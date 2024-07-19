#include <iostream>
#include <vector>
#include <string>
#include <cmath>

int specialFilter(std::vector<int> nums){
    int count = 0;
    for (int num : nums) {
        if (num > 10) {
            std::string str_num = std::to_string(std::abs(num));
            if ((str_num.front() - '0') % 2 != 0 && (str_num.back() - '0') % 2 != 0) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    assert(specialFilter({}) == 0);
    return 0;
}