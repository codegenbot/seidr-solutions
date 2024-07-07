```
#include <iostream>
#include <vector>
#include <algorithm>

double max_element(const std::vector<int>& vec) {
    return *std::max_element(vec.begin(), vec.end());
}

int main() {
    std::vector<int> vec = {5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10};
    int maxVal = static_cast<int>(max_element(vec));
    std::cout << "Maximum value in the vector is: " << maxVal << std::endl;
    return 0;
}