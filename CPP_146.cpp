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
    vector<int> nums = {11,12,15,16,20};
    cout << "Number of special numbers in the array is: " << specialFilter(nums) << endl;
    
    return 0;
}