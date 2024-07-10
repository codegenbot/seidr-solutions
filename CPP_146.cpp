#include <vector>
#include <iostream>

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
    std::vector<int> test1 = {11, 12, 13};
    std::cout << "Test 1: " << specialFilter(test1) << std::endl;

    std::vector<int> test2 = {22, 23, 24, 25, 26};
    std::cout << "Test 2: " << specialFilter(test2) << std::endl;
    
    return 0;
}