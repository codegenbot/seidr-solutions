```cpp
#include <iostream>
#include <vector>

using namespace std;

int specialFilter(vector<int> nums){
    int count = 0;
    for(int num : nums){
        if(num > 10 && (num % 10) % 2 != 0 && (num / 10) % 10 % 2 != 0){
            count++;
        }
    }
    return count;
}

int main(){
    vector<int> nums = {11, 23, 12, 34, 45};
    cout << "Number of integers in the range satisfying the condition: " << specialFilter(nums) << endl;
    return 0;
}