#include <vector>
#include <algorithm>
#include <unordered_set>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    std::vector<int> sorted_a = a;
    std::vector<int> sorted_b = b;
    std::sort(sorted_a.begin(), sorted_a.end());
    std::sort(sorted_b.begin(), sorted_b.end());
    return sorted_a == sorted_b;
}

std::vector<int> unique_digits(std::vector<int> numbers) {
    std::unordered_set<int> unique;
    for (int num : numbers) {
        while (num > 0) {
            int digit = num % 10;
            unique.insert(digit);
            num /= 10;
        }
    }
    std::vector<int> unique_digits_vec(unique.begin(), unique.end());
    std::sort(unique_digits_vec.begin(), unique_digits_vec.end());
    return unique_digits_vec;
}

int main() {
    assert(issame(unique_digits({135, 103, 31}), {1, 3, 5}));
    return 0;
}