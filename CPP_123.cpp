#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> get_odd_collatz(int n) {
    std::vector<int> result;
    while (n != 1) {
        result.push_back(n);
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1;
        }
    }
    result.push_back(1);
    std::vector<int> odd_numbers;
    for (int num : result) {
        if (num % 2 != 0) {
            odd_numbers.push_back(num);
        }
    }
    std::sort(odd_numbers.begin(), odd_numbers.end());
    return odd_numbers;
}

int main() {
    assert(issame(get_odd_collatz(1), {1}));
    return 0;
}