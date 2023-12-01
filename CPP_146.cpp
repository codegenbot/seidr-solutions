#include <vector>
#include <iostream>
#include <assert.h>

using namespace std;

int specialFilter(vector<int> nums){
    int count = 0;
    for(int i=0; i<nums.size(); i++){
        if(nums[i] > 10){
            string numStr = to_string(nums[i]);
            int firstDigit = numStr[0] - '0';
            int lastDigit = numStr[numStr.length()-1] - '0';
            if(firstDigit % 2 != 0 && lastDigit % 2 != 0){
                count++;
            }
        }
    }
    return count;
}

int main() {
    // Test cases
    assert(specialFilter({}) == 0);
    assert(specialFilter({9, 20, 23, 16, 11, 5}) == 1);
    assert(specialFilter({25, 33, 18, 47, 39, 10}) == 2);

    cout << "All test cases passed.";

    return 0;
}