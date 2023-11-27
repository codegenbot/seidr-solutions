#include <vector>
#include <cassert>

int specialFilter(std::vector<int> nums){
    int count = 0;
    for(int num : nums){
        std::string numStr = std::to_string(num);
        int firstDigit = numStr[0] - '0';
        int lastDigit = numStr[numStr.length() - 1] - '0';
        
        if(num > 10 && firstDigit % 2 != 0 && lastDigit % 2 != 0){
            count++;
        }
    }
    return count;
}

int main() {
    assert(specialFilter({}) == 0);
    assert(specialFilter({15, 26, 37}) == 0);
    assert(specialFilter({12, 23, 34}) == 3);
    
    return 0;
}