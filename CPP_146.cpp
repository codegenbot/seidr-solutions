#include <iostream>
#include <vector>

int specialFilter(std::vector<int> nums){
    int count = 0;
    for(int num : nums){
        std::string numStr = std::to_string(std::abs(num));
        if(num > 10 && (numStr[0] - '0') % 2 != 0 && (numStr[numStr.length() - 1] - '0') % 2 != 0){
            count++;
        }
    }
    return count;
}

int main(){
    std::vector<int> nums = {12, -34, 56, -78, 90};
    int result = specialFilter(nums);
    std::cout << result << std::endl;
    return 0;
}