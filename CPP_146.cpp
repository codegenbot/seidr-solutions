#include <iostream>
#include <vector>

int specialFilter(std::vector<int> nums){
    int count = 0;
    for(int num : nums){
        if(num > 10 && (num % 10) % 2 != 0 && (num / 10) % 10 % 2 != 0){
            count++;
        }
    }
    return count;
}

int main(){
    std::vector<int> nums = {1, 2, 3};
    assert(specialFilter(nums) == 0);
    return 0;
}