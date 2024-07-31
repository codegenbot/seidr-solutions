```cpp
#include <iostream>
#include <vector>
#include <algorithm>

int maxElement(const std::vector<int>& vec) {
    return *std::max_element(vec.begin(), vec.end());
}

int main() {
    std::vector<int> input;
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    for(int i = 0; i < n; i++) {
        int temp;
        std::cout << "Enter element " << (i+1) << ": ";
        std::cin >> temp;
        input.push_back(temp);
    }

    auto maxVal = *std::max_element(input.begin(), input.end());
    std::cout << "Maximum element is: " << maxVal << std::endl;

    return 0;
}