#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<float> sort_even(const std::vector<float>& l) {
    std::vector<float> l_prime = l;
    std::vector<float> even_values;
    
    for (size_t i = 0; i < l.size(); i += 2) {
        even_values.push_back(l[i]);
    }
    
    std::sort(even_values.begin(), even_values.end());
    
    for (size_t i = 0; i < l.size(); i += 2) {
        l_prime[i] = even_values[i / 2];
    }
    
    return l_prime;
}

int main() {
    assert(issame(sort_even({5, 8, -12, 4, 23, 2, 3, 11, 12, -10}), {-12, 8, 3, 4, 5, 2, 12, 11, 23, -10}));
    
    return 0;
}