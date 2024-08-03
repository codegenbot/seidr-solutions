#include <iostream>
#include <vector>
#include <algorithm>

bool issame(std::vector<float> a, std::vector<float> b) {
    return a == b;
}

std::vector<float> sort_even(const std::vector<float>& v) {
    std::vector<float> even_nums;
    for (float num : v) {
        if (static_cast<int>(num) % 2 == 0) {
            even_nums.push_back(num);
        }
    }
    std::sort(even_nums.begin(), even_nums.end());
    return even_nums;
}

int main() {
    std::vector<float> test1 = {2.1f, 3.2f, 4.0f, 5.5f, 6.2f};
    std::vector<float> sorted_even = sort_even(test1);

    for (const auto& num : sorted_even) {
        std::cout << num << " ";
    }

    return 0;
}