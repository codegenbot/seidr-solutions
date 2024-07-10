#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

std::vector<float> sort_even(std::vector<float> numbers) {
    std::vector<float> evenNumbers;
    for (const auto& num : numbers) {
        if (static_cast<int>(num) % 2 == 0) {
            evenNumbers.push_back(num);
        }
    }
    std::sort(evenNumbers.begin(), evenNumbers.end());
    
    size_t idx = 0;
    for (size_t i = 0; i < numbers.size(); ++i) {
        if (static_cast<int>(numbers[i]) % 2 == 0) {
            numbers[i] = evenNumbers[idx++];
        }
    }
    
    return numbers;
}

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a == b;
}

int main() {
    std::vector<float> testNumbers = {5, 8, -12, 4, 23, 2, 3, 11, 12, -10};
    testNumbers = sort_even(testNumbers);
    
    std::vector<float> expectedSortedNumbers = {-12, 8, 3, 4, 5, 2, 12, 11, 23, -10};
    assert(issame(testNumbers, expectedSortedNumbers));

    for (const auto& num : testNumbers) {
        std::cout << num << " ";
    }
    return 0;
}