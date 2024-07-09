#include <iostream>
#include <vector>
#include <algorithm>

int findMax(std::vector<int> numbers) {
    if (numbers.empty()) {
        std::cout << "-1" << std::endl;
    } else {
        int maxNum = *std::max_element(numbers.begin(), numbers.end());
        std::cout << maxNum << std::endl;
    }
    return 0;
}

int main() {
    std::vector<int> numbers;
    int num = 0; // initialize with a default value
    while (true) { // keep reading until invalid input is given
        if (!(std::cin >> num)) {
            break;
        }
        numbers.push_back(num);
    }
    findMax(numbers);
    return 0;
}