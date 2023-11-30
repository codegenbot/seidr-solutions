#include <iostream>
#include <vector>

std::vector<int> intersperse(std::vector<int> numbers, int delimiter) {
    std::vector<int> result;
    for (int i = 0; i < numbers.size(); i++) {
        result.push_back(numbers[i]);
        if (i != numbers.size() - 1) {
            result.push_back(delimiter);
        }
    }
    return result;
}

int main() {
    std::vector<int> numbers = {1, 2, 3};
    int delimiter = 4;
    std::vector<int> result = intersperse(numbers, delimiter);
    for (int i = 0; i < result.size(); i++) {
        std::cout << result[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}