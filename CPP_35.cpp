#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers;
    int maxNum = (numbers.empty()) ? -1 : *std::max_element(numbers.begin(), numbers.end());
    if (maxNum != -1)
        std::cout << maxNum << std::endl;
    return 0;
}