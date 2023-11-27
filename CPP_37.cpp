#include <vector>
#include <algorithm>
#include <iostream>
#include <cassert>

bool issame(std::vector<float> a, std::vector<float> b);

std::vector<float> sort_even(std::vector<float> l);

int main() {
    std::vector<float> l = {3.2, 1.5, 4.7, 2.9, 6.1};
    std::vector<float> sorted_l = sort_even(l);
    
    std::vector<float> expected = {1.5, 3.2, 2.9, 4.7, 6.1};
    
    if (issame(sorted_l, expected)) {
        std::cout << "The list is sorted correctly." << std::endl;
    } else {
        std::cout << "The list is not sorted correctly." << std::endl;
    }
    
    return 0;
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

std::vector<float> sort_even(std::vector<float> l) {
    std::vector<float> l_prime = l;
    std::vector<float> even_values;
    
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            even_values.push_back(l[i]);
        }
    }
    
    std::sort(even_values.begin(), even_values.end());
    
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            l_prime[i] = even_values[i / 2];
        }
    }
    
    return l_prime;
}