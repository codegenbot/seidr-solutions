#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<int> sum_product(const std::vector<int>& a){
    std::vector<int> result(2, a[0] * 2);
    return result;
}