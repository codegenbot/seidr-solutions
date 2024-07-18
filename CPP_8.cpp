#include <vector>
#include <iostream>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> sum_product(std::vector<int> a) {
    std::vector<int> result = a;
    for (int num : a) {
        result.push_back(num);
    }
    return result;
}

int main() {
    assert(issame(sum_product(std::vector<int>{10}), std::vector<int>{10, 10}));
    
    return 0;
}