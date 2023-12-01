#include <vector>
#include <algorithm>
#include <cassert>

std::vector<float> sort_even(std::vector<float> l) {
    std::vector<float> l_prime = l;
    std::vector<float> even_values;
    
    for (int i = 0; i < l.size(); i += 2) {
        even_values.push_back(l[i]);
    }
    
    std::sort(even_values.begin(), even_values.end());
    
    for (int i = 0; i < l.size(); i += 2) {
        l_prime[i] = even_values[i/2];
    }
    
    return l_prime;
}

bool issame(std::vector<float> a, std::vector<float> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}