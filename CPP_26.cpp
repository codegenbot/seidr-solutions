#include <iostream>
#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> remove_duplicates(std::vector<int> numbers) {
    numbers.erase(std::unique(numbers.begin(), numbers.end()), numbers.end());
    return numbers;
}

int main() {
    std::vector<int> input = {1, 2, 2, 3, 4, 4, 5};
    std::vector<int> result = remove_duplicates(input);

    for (int num : result) {
        std::cout << num << " ";
    }

    std::vector<int> duplicate = {1, 2, 2, 3, 4, 4, 5};
    std::vector<int> noduplicate = {1, 2, 3, 4, 5};
    std::cout << issame(duplicate, noduplicate);

    return 0;
}