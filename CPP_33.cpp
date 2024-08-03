#include <vector>
#include <algorithm>
#include <cassert>
#include <iostream>

bool issame(std::vector<int> a, std::vector<int> b) {
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

std::vector<int> sort_third(std::vector<int> l) {
    std::vector<int> l_divisible_by_three;
    for (int i = 0; i < l.size(); i++) {
        if (l[i] % 3 == 0) {
            l_divisible_by_three.push_back(l[i]);
        }
    }
    std::sort(l_divisible_by_three.begin(), l_divisible_by_three.end());
    
    std::vector<int> l_prime = l;
    int j = 0;
    for (int i = 0; i < l.size(); i++) {
        if (l[i] % 3 == 0) {
            l_prime[i] = l_divisible_by_three[j];
            j++;
        }
    }
    
    return l_prime;
}

int main() {
    assert(issame(sort_third({5, 6, 3, 4, 8, 9, 2, 1}), {2, 6, 3, 4, 8, 9, 5, 1}));
    
    std::cout << "Test cases pass!" << std::endl;
    
    return 0;
}