#include <vector>
#include <string>
#include <cstdlib>

int specialFilter(std::vector<int> nums){
    int count = 0;
    for (int num : nums) {
        if (num > 10) {
            std::string numStr = std::to_string(abs(num));
            if (numStr.front() % 2 == 1 && numStr.back() % 2 == 1) {
                count++;
            }
        }
    }
    return count;
}

assert (specialFilter(std::vector<int>{}) == 0);