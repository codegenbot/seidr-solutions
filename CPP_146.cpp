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
    vector<int> nums = {12, 23, 34, 45, 56};
    int result = specialFilter(nums);
    assert(result == 3);
    
    nums = {1, 2, 3, 4, 5};
    result = specialFilter(nums);
    assert(result == 0);
    
    return 0;
}