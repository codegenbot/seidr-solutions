#include <vector>
#include <algorithm>

bool issame(std::vector<float> a, std::vector<float> b) {
    return a == b;
}

std::vector<float> sort_even(std::vector<float> l) {
    std::vector<float> even_vals;
    std::vector<float> result;
    
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            even_vals.push_back(l[i]);
        }
    }
    
    std::sort(even_vals.begin(), even_vals.end());
    
    int j = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            result.push_back(even_vals[j++]);
        } else {
            result.push_back(l[i]);
        }
    }
    
    return result;
}