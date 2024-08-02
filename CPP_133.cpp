#include <vector>
#include <cmath>
#include <cassert>

int sum_squares(const std::vector<int>& lst) {
    int sum = 0;
    for (int num : lst) {
        sum += std::round(num) * std::round(num);
    }
    return sum;
}

int main() {
    assert(sum_squares({-1, 1, 0}) == 2);
    return 0;
}