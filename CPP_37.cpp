#include <iostream>
#include <vector>
#include <algorithm>

bool issame(std::vector<float> a, std::vector<float> b) {
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    return a == b;
}

std::vector<float> sort_even(std::vector<float> vec) {
    std::vector<float> even_numbers;
    for (const auto &num : vec) {
        if (num % 2 == 0) {
            even_numbers.push_back(num);
        }
    }
    std::sort(even_numbers.begin(), even_numbers.end());
    return even_numbers;
}

int main() {
    assert(issame(sort_even({5, 8, -12, 4, 23, 2, 3, 11, 12, -10}), {-12, 8, 4, 2, 12, -10}));
    return 0;
}