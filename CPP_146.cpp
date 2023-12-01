#include <iostream>
#include <vector>

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

int main(){
    // Test cases
    assert (specialFilter({}) == 0);
    assert (specialFilter({1, 2, 3, 11, 20, 21, 22}) == 1);
    assert (specialFilter({12, 25, 68, 99, 105, 206}) == 0);
    assert (specialFilter({13, 34, 57, 81, 99, 101, 111}) == 3);

    return 0;
}