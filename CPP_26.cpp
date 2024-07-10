#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> remove_duplicates(std::vector<int> numbers) {
    std::vector<int> unique_numbers;
    for (int num : numbers) {
        if (std::count(numbers.begin(), numbers.end(), num) == 1) {
            unique_numbers.push_back(num);
        }
    }
    return unique_numbers;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(remove_duplicates({1, 2, 3, 2, 4, 3, 5}), {1, 4, 5}));

    return 0;
}