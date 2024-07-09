```cpp
#include <iostream>
#include <vector>
#include <algorithm>

int findMax(std::vector<int> numbers) {
    int maxNum = (numbers.empty()) ? -1 : *std::max_element(numbers.begin(), numbers.end());
    if (maxNum != -1)
        std::cout << maxNum << std::endl;
    return 0;
}

int main() {
    std::vector<int> numbers;
    int num = 0; // initialize with a default value
    while(std::cin >> num) { // keep reading until valid input is given
        numbers.push_back(num);
    }
    findMax(numbers);
    return 0;
}