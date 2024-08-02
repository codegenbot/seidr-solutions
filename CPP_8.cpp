#include <vector>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a[0] == b[0] && a[1] == b[1];
}

std::pair<int, int> sum_product(const std::vector<int>& numbers) {
    int sum = 0;
    int product = 1;

    for (int num : numbers) {
        sum += num;
        product *= num;
    }

    return {sum, product};
}