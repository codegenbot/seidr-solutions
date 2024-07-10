```
#include <iostream>
#include <vector>

int specialFilter(std::vector<int> nums){
    int count = 0;
    for(int num : nums){
        if(num > 10 && (num % 10) % 2 != 0 && (num / 10) % 10 % 2 != 0)
            count++;
    }
    return count;

}

int main() {
    std::cout << specialFilter({1,11,13,22,30}) << std::endl; 
    return 0;
}