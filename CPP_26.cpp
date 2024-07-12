#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> remove_duplicates(std::vector<int> numbers) {
    numbers.erase(std::unique(numbers.begin(), numbers.end()), numbers.end());
    return numbers;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}