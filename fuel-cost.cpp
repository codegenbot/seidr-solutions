#include <vector>
#include <iostream>

int fuelCost(std::vector<int> numbers) {
    int sum = 0;
    for (int num : numbers) {
        int result = (num / 3);
        int newNum = std::floor(result) - 2;
        sum += newNum;
    }
    return sum;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> numbers(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }
    std::cout << fuelCost(numbers) << std::endl;
    return 0;
}