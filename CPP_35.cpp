#include <iostream>
#include <vector>
#include <algorithm>

int maxElement(const std::vector<int>& vec) {
    return *std::max_element(vec.begin(), vec.end());
}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::vector<int> input;
    input.resize(n);

    for(int i = 0; i < n; i++) {
        int temp;
        std::cout << "Enter element " << (i+1) << ": ";
        std::cin >> temp;
        input[i] = temp;
    }

    std::cout << "Maximum element is: " << maxElement(input) << std::endl;

    return 0;
}