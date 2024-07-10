#include <vector>
#include <algorithm>

std::vector<int> sort_even(const std::vector<int>& numbers) {
    std::vector<int> even_numbers;
    for (const auto& number : numbers) {
        if (number % 2 == 0) {
            even_numbers.push_back(number);
        }
    }
    return even_numbers;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return (a.size() == b.size()) && std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    std::vector<int> numbers = {5, 8, -12, 4, 23, 2, 3, 11, 12, -10};
    std::vector<int> even_numbers = sort_even(numbers);
    assert(issame(even_numbers, {2, 4, 8, 12}));
    return 0;
}