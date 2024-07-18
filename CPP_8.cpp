#include <iostream>
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b);

std::pair<int, int> sum_product(std::vector<int> numbers) {
    int sum = 0;
    int product = 1;
    for (int num : numbers) {
        sum += num;
        product *= num;
    }
    return {sum, product};
}

int main() {
    auto result = sum_product(std::vector<int>{10});
    std::cout << "Sum: " << result.first << " Product: " << result.second << std::endl;
    return 0;
}