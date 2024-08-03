#include <vector>
#include <cassert>
#include <algorithm>

std::pair<int, int> sum_product(const std::vector<int>& numbers) {
    int sum = 0;
    int product = 1;
    for (int num : numbers) {
        sum += num;
        product *= num;
    }
    return {sum, product};
}

bool issame(std::pair<int, int> a, std::pair<int, int> b) {
    return std::make_pair(a.first, a.second) == std::make_pair(b.first, b.second);
}

int main() {
    assert(issame(sum_product({10}), {10, 10}));
    return 0;    
}