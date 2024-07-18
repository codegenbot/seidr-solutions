#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> sum_product(std::vector<int> vec) {
    std::vector<int> result;
    if (vec.empty()) {
        return result;
    }
    int product = 1;
    for (int num : vec) {
        product *= num;
    }
    result.push_back(product);
    result.push_back(vec.front());
    return result;
}

int main() {
    assert(issame(sum_product({10}), {10, 10}));
    return 0;
}