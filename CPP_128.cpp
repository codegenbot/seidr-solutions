#include <vector>
#include <cassert>
#include <cmath>

int prod_signs(const std::vector<int>& arr) {
    if (arr.empty()) {
        return -32768;
    }

    int product = 1;
    int sum = 0;

    for (int num : arr) {
        if (num > 0) {
            product *= 1;
        } else if (num < 0) {
            product *= -1;
        } else {
            product *= 0;
        }

        sum += std::abs(num);
    }

    return product * sum;
}

int main() {
    assert(prod_signs({-1, 1, 1, 0}) == 0);

    return 0;
}