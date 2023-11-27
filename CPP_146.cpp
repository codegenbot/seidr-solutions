#include <iostream>
#include <vector>
using namespace std;

int specialFilter(vector<int> nums){
    int count = 0;
    for(int num : nums){
        string numStr = to_string(num);
        int firstDigit = numStr[0] - '0';
        int lastDigit = numStr[numStr.length()-1] - '0';
        if(num > 10 && firstDigit % 2 != 0 && lastDigit % 2 != 0){
            count++;
        }
    }
    return count;
}

int main() {
    // Test the specialFilter function
    vector<int> nums = {12, 35, 48, 27, 91};
    cout << specialFilter(nums) << endl;
    
    return 0;
}