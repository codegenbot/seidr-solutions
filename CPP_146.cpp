#include <vector>

int specialFilter(std::vector<int> nums){
    int count = 0;
    for(int num : nums){
        std::string numStr = std::to_string(abs(num));
        if(numStr.front() % 2 != 0 && numStr.back() % 2 != 0 && num > 10){
            count++;
        }
    }
    return count;
}