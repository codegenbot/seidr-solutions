#include <vector>
#include <cassert>

int specialFilter(vector<int> nums){
    int count = 0;
    for(int num : nums){
        string numStr = to_string(num);
        int firstDigit = numStr[0] - '0';
        int lastDigit = numStr[numStr.size()-1] - '0';
        if(num > 10 && firstDigit % 2 != 0 && lastDigit % 2 != 0){
            count++;
        }
    }
    return count;
}

int main() {
    // Test your specialFilter function
    vector<int> nums = {12, 23, 34, 45, 56};
    int result = specialFilter(nums);
    assert(result == 2);
    
    return 0;
}