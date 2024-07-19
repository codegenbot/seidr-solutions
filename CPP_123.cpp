#include <vector>
#include <cassert>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> get_odd_collatz(int num) {
    std::vector<int> result;
    while (num != 1) {
        if (num % 2 == 0) {
            num = num / 2;
        } else if (num != 1) {
            result.push_back(num);
            num = 3 * num + 1;
        }
    }
    result.push_back(1);
    return result;
}