#include <iostream>
#include <vector>

int specialFilter(std::vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (abs(num) > 10 && ((num / 10) % 2 != 0 || num % 10 % 2 != 0)) {
            count++;
        }
    }
    return count;
}

int main() {
    assert(specialFilter({}) == 0);
    std::vector<int> numbers;
    int n;
    std::cout << "Enter the number of elements in the array: ";
    std::cin >> n;
    
    for(int i = 0; i < n; ++i) {
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> numbers.push_back(n);
    }
    
    int result = specialFilter(numbers);
    std::cout << "Number of elements that meet the condition: " << result << std::endl;
    
    return 0;
}