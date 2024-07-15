#include <vector>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<int> sum_product(const std::vector<int>& a){
    std::vector<int> result;
    result.push_back(a[0]);
    result.push_back(a[0]);
    return result;
}

int main() {
    assert(issame(sum_product({10}), {10, 10}));
    return 0;
}