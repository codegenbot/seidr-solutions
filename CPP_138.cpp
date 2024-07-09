#include <vector>

bool is_equal_to_sum_even(int n) {
    for (int a = 2; a <= n; ++a) {
        if (n - a > a && is_equal_to_sum_even(n - a, a)) {
            return true;
        }
    }
    return false;
}

bool is_equal_to_sum_even(int n, int a) {
    std::vector<int> numbers = {2};
    for (int i = 2; i <= n / 2; ++i) {
        if (n - a == i * i || n - a == i * 2) {
            return true;
        }
        numbers.push_back(i);
    }
    for (const auto& num : numbers) {
        if (n - a == num * 2) {
            return true;
        }
    }
    return false;
}