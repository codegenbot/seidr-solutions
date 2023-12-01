#include <vector>
#include <iostream>

int specialFilter(std::vector<int> nums){
    int count = 0;
    for(int num : nums){
        std::string strNum = std::to_string(num);
        int firstDigit = strNum[0] - '0';
        int lastDigit = strNum[strNum.length() - 1] - '0';
        if(num > 10 && firstDigit % 2 != 0 && lastDigit % 2 != 0){
            count++;
        }
    }
    return count;
}

int main() {
    std::vector<int> nums = {12, 35, 45, 67, 81, 94};
    int result = specialFilter(nums);
    std::cout << result << std::endl;
    return 0;
}