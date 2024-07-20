#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> remove_duplicates(const std::vector<int>& numbers) {
    std::vector<int> result = numbers;
    std::sort(result.begin(), result.end());
    result.erase(std::unique(result.begin(), result.end()), result.end());
    return result;
}

int main() {
    assert(issame(remove_duplicates({1, 2, 3, 2, 4, 3, 5}), {1, 4, 5}));

    std::vector<int> numbers = {1, 2, 2, 3, 4, 4, 5};
    std::vector<int> unique_numbers = remove_duplicates(numbers);

    assert(unique_numbers.size() == 4);
    assert(unique_numbers[0] == 1);
    assert(unique_numbers[1] == 3);
    assert(unique_numbers[2] == 4);
    assert(unique_numbers[3] == 5);

    for (int num : unique_numbers) {
        std::cout << num << " ";
    }
    return 0;
}