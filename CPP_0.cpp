#include <vector>
#include <algorithm>
#include <iostream>

bool containsCloseNums(const std::vector<int>& numbers, int threshold) {
    if (numbers.size() < 2) {
        return false;
    }
    
    std::sort(numbers.begin(), numbers.end());
    for (int i = 1; i < numbers.size(); ++i) {
        if (std::abs(numbers[i] - numbers[i - 1]) < threshold) {
            return true;
        }
    }
    return false;
}

int main() {
    // Test your function here if needed
    return 0;
}