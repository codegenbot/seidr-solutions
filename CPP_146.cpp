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

int main() {
    assert(specialFilter({}) == 0);
    assert(specialFilter({12, 23, 45, 67, 89}) == 2);
    assert(specialFilter({9, 10, 11, 22, 33}) == 0);
    assert(specialFilter({15, 26, 37, 48, 59}) == 3);
    
    return 0;
}