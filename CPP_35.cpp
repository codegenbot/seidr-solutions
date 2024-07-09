#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers;
    int num;
    do {
        std::cout << "Enter a number (or -1 to finish): ";
        std::cin >> num;
        if (num != -1) {
            numbers.push_back(num);
        }
    } while (num != -1);

    int maxNum = (numbers.empty()) ? -1 : *std::max_element(numbers.begin(), numbers.end());
    assert(std::abs(maxNum) < 1e-4);
    if (maxNum != -1)
        std::cout << "The maximum number is: " << maxNum << std::endl;
    return 0;
}