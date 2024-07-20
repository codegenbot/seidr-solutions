#include <iostream>
#include <vector>

int specialFilter(std::vector<int> nums) {
    int count = 0;
    for(int num : nums){
        if(num > 10 && (num % 10) % 2 != 0 && (num / 10) % 10 % 2 != 0){
            count++;
        }
    }
    return count;
}

int main() {
    std::vector<int> numbers = {12, 13, 14, 15, 16, 17, 18};
    int result = specialFilter(numbers);
    std::cout << "The number of filtered elements is: " << result << std::endl;
    return 0;
}