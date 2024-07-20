#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> remove_duplicates(const std::vector<int>& numbers) {
    std::vector<int> result = numbers;
    std::sort(result.begin(), result.end());
    result.erase(std::unique(result.begin(), result.end()), result.end());
    return result;
}

int main() {
    std::vector<int> numbers = {1, 2, 2, 3, 4, 4, 5};
    std::vector<int> unique_numbers = remove_duplicates(numbers);

    assert(remove_duplicates({1, 2, 3, 2, 4, 3, 5}) == std::vector<int>{1, 3, 4, 5});

    for (int num : unique_numbers) {
        std::cout << num << " ";
    }
    return 0;
}