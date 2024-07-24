#include <cassert>
#include <vector>
#include <iostream>

int specialFilter(std::vector<int> nums);

int main() {
    assert(specialFilter({}) == 0);
};

int specialFilter(std::vector<int> nums){
    int count = 0;
    for(int num : nums){
        if(num > 10 && (num % 10) % 2 != 0 && (num / 10) % 10 % 2 != 0){
            count++;
        }
    }
    return count;
};