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

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame(std::vector<int>{sum_product({10}).first}, std::vector<int>{10}) && 
           issame(std::vector<int>{sum_product({10}).second}, std::vector<int>{10}));
    return 0;
}