#include <vector>
#include <algorithm>

std::vector<int> count_up_to(int n) {
    std::vector<int> prime_nums;
    for (int i = 2; i <= n; ++i) {
        bool is_prime = true;
        for (int j = 2; j * j <= i; ++j) {
            if (i % j == 0) {
                is_prime = false;
                break;
            }
        }
        if (is_prime) {
            prime_nums.push_back(i);
        }
    }
    return prime_nums;
}