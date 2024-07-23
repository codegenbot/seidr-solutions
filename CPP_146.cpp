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

int main() {
    // test the function
    assert(specialFilter({}) == 0);
    std::cout << "Test passed." << std::endl;
    return 0;
}