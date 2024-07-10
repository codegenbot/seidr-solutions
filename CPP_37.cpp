#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& v1, const std::vector<int>& v2) {
    if (v1.size() != v2.size()) return false;
    for (int i = 0; i < v1.size(); ++i) {
        if (v1[i] != v2[i]) return false;
    }
    return true;
}

std::vector<int> sort_even(const std::vector<int>& numbers) {
    std::vector<int> even_numbers;
    for (int num : numbers) {
        if (num % 2 == 0) {
            even_numbers.push_back(num);
        }
    }
    std::sort(even_numbers.begin(), even_numbers.end());
    return even_numbers;
}

int main() {
    std::vector<int> numbers = {5, 8, -12, 4, 23, 2, 3, 11, 12, -10};
    std::vector<int> even_numbers = sort_even(numbers);
    assert(issame(even_numbers, {2, 4, 8, 12}));
    return 0;
}