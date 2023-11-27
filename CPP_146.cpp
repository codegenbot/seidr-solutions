#include <vector>
#include <iostream>

int specialFilter(vector<int> nums){
    int count = 0;
    for(int num : nums){
        std::string numStr = std::to_string(num);
        int firstDigit = numStr[0] - '0';
        int lastDigit = numStr[numStr.length()-1] - '0';
        if(num > 10 && firstDigit % 2 != 0 && lastDigit % 2 != 0){
            count++;
        }
    }
    return count;
}

int main() {
    // Sample usage of specialFilter function
    std::vector<int> nums = {12, 23, 35, 48, 52, 67};
    int result = specialFilter(nums);
    std::cout << "Count: " << result << std::endl;

    return 0;
}