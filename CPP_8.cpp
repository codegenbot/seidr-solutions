#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> sum_product(std::vector<int> a) {
    long long sum = 0;
    long long product = 1;
    for (int num : a) {
        sum += num;
        product *= num;
    }
    return {static_cast<int>(sum), static_cast<int>(product)};
}

int main() {
    assert(issame(sum_product(std::vector<int>{10}), std::vector<int>{10, 10}));
    
    return 0;
}