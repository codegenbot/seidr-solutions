#include <algorithm>
#include <cmath>
#include <vector>
#include <iostream>

int calculateMaxValue() {
    std::vector<int> numbers;
    int num;
    while (true) {
        std::cout << "Enter a number (-1 to finish): ";
        std::cin >> num;
        if (num == -1)
            break;
        numbers.push_back(num);
    }
    return std::abs(*std::max_element(numbers.begin(), numbers.end()));
}

int main() {
    return calculateMaxValue();
}