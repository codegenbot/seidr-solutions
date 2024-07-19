#include <iostream>
#include <vector>
#include <algorithm>

int calculateMedian(std::vector<float> numbers) {
    int n = numbers.size();
    std::sort(numbers.begin(), numbers.end());
    
    if (n % 2 == 0)
        return (numbers[n/2 - 1] + numbers[n/2]) / 2;
    else
        return numbers[n/2];
}

int main() {
    std::vector<float> numbers;
    float num;

    while (std::cin >> num) {
        numbers.push_back(num);
    }

    if (!numbers.empty()) {
        std::cout << calculateMedian(numbers) << std::endl;
    } else {
        std::cout << "No median to display." << std::endl;
    }
    
    return 0;
}