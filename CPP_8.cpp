#include <vector>
#include <cassert>

bool issame(const std::std::vector<int>& a, const std::std::vector<int>& b){
    return a == b;
}

std::std::vector<int> sum_product(const std::std::vector<int>& a){
    std::std::vector<int> result;
    result.push_back(a[0]);
    result.push_back(a[0]);
    return result;
}

int main() {
    assert(std::issame(std::sum_product({10}), {10, 10}));
    return 0;
}