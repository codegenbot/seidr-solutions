#include <iostream>
#include <vector>

std::pair<int, int> sum_product(const std::vector<int>& numbers) {
    int sum = 0;
    int product = 1;
    for (int num : numbers) {
        sum += num;
        product *= num;
    }
    return {sum, product};
}

int main() {
    std::vector<int> numbers = {2, 3, 5, 7}; // Example input
    auto result = sum_product(numbers);
    std::cout << "Sum: " << result.first << std::endl;
    std::cout << "Product: " << result.second << std::endl;
    
    return 0;
}