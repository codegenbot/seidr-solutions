#include <cassert>
#include <vector>

std::pair<int, int> sum_product(const std::vector<int>& numbers) {
    int sum = 0;
    int product = 1;
    for (int num : numbers) {
        sum += num;
        product *= num;
    }
    return {sum, product};
}

bool issame(const std::pair<int, int>& a, const std::vector<int>& b) {
    return a == sum_product(b);
}

int main() {
    assert(issame(sum_product({10}), std::make_pair(10, 10)));
    return 0;
}