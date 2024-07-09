#include <iostream>
#include <vector>
#include <algorithm>

int maxFunc() {
    std::vector<int> numbers = {5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10};
    std::cout << *std::max_element(numbers.begin(), numbers.end()) << std::endl;
    return 0;
}