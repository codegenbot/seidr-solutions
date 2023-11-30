#include <cassert>
#include <vector>

int specialFilter(vector<int> nums){
    int count = 0;
    for(int num : nums){
        std::string numStr = std::to_string(num);
        int firstDigit = numStr[0] - '0';
        int lastDigit = numStr[numStr.size()-1] - '0';
        if(num > 10 && firstDigit % 2 != 0 && lastDigit % 2 != 0){
            count++;
        }
    }
    return count;
}

int main() {
    // Test your function here
    std::vector<int> nums = {12, 23, 34, 45, 56};
    int result = specialFilter(nums);
    assert(result == 3);
    
    return 0;
}