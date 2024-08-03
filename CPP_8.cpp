#include <vector>

bool issame(const vector<int>& a, const vector<int>& b);

std::vector<int> sum_product(const std::vector<int>& v);

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> sum_product(const std::vector<int>& v) {
    int sum = 0, product = 1;
    for (auto num : v) {
        sum += num;
        product *= num;
    }
    return {sum, product};
}