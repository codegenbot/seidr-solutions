#include <vector>
#include <string>

int specialFilter(const std::vector<int>& nums){
    int count = 0;
    for(int num : nums){
        if(num > 10){
            std::string numStr = std::to_string(num);
            if((numStr.front() - '0') % 2 != 0 && (numStr.back() - '0') % 2 != 0){
                count++;
            }
        }
    }
    return count;
}