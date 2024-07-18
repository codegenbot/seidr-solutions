#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> remove_duplicates(std::vector<int> numbers) {
    std::sort(numbers.begin(), numbers.end());
    numbers.erase(std::unique(numbers.begin(), numbers.end()), numbers.end());
    return numbers;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    // Main function can use the defined functions
    return 0;
}