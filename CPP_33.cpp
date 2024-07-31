#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> sort_third(std::vector<int> l) {
    std::vector<int> l_divisible_by_three;
    for (int i = 0; i < l.size(); ++i) {
        if (i % 3 == 0) {
            l_divisible_by_three.push_back(l[i]);
        }
    }
    std::sort(l_divisible_by_three.begin(), l_divisible_by_three.end());
    
    std::vector<int> l_prime = l;
    for (int i = 0, j = 0; i < l.size(); ++i) {
        if (i % 3 == 0) {
            l_prime[i] = l_divisible_by_three[j++];
        }
    }
    
    return l_prime;
}

int main() {
    assert(issame(sort_third({5, 6, 3, 4, 8, 9, 2, 1}), std::vector<int>({2, 6, 3, 4, 8, 9, 5, 1})));
    
    return 0;
}