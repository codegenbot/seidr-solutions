#include <vector>
#include <algorithm>

std::vector<int> remove_duplicates(std::vector<int> numbers) {
    std::vector<int> unique_numbers;
    for (int num : numbers) {
        if (find(unique_numbers.begin(), unique_numbers.end(), num) == unique_numbers.end()) {
            unique_numbers.push_back(num);
        }
    }
    return unique_numbers;
}