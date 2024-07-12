#include <vector>
#include <cassert>

int scalar_product(const std::vector<int>& a, const std::vector<int>& b){
    assert(a.size() == b.size());
    int result = 0;
    for (size_t i = 0; i < a.size(); ++i) {
        result += a[i] * b[i];
    }
    return result;
}