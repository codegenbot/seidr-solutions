#include <vector>
#include <algorithm>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return a == b;
}

std::vector<float> sort_even(const std::vector<float>& v) {
    std::vector<float> even_sorted;
    for (float num : v) {
        if (static_cast<int>(num) % 2 == 0) {
            even_sorted.push_back(num);
        }
    }
    std::sort(even_sorted.begin(), even_sorted.end());
    return even_sorted;
}

int main() {
    // Test cases for sort_even function
    std::vector<float> test_case1 = {3.2, 5.5, 2.4, 7.8, 4.1};
    std::vector<float> result1 = sort_even(test_case1);
    // Add more test cases and validations here

    return 0;
}