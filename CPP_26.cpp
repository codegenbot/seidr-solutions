#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> remove_duplicates(const std::vector<int>& numbers) {
    std::vector<int> unique_numbers = numbers;
    std::sort(unique_numbers.begin(), unique_numbers.end());
    unique_numbers.erase(std::unique(unique_numbers.begin(), unique_numbers.end()), unique_numbers.end());
    return unique_numbers;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame(remove_duplicates({1, 2, 3, 2, 4, 3, 5}), {1, 4, 5}));
    return 0;
}