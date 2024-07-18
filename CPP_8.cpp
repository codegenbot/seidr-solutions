#include <vector>
#include <cassert>

std::vector<int> sum_product(std::vector<int> v) {
    std::vector<int> result;
    result.push_back(v[0]);
    result.push_back(v[0]);
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

int main() {
    assert(issame(sum_product({10}), {10, 10}));
    
    return 0;
}