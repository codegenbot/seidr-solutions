#include <vector>
#include <iostream>
#include <cassert>

std::vector<int> count_up_to(int n) {
    std::vector<int> result;
    if (n < 2) {
        return result;
    }
    std::vector<bool> is_prime(n, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i < n; ++i) {
        if (is_prime[i]) {
            result.push_back(i);
            for (int j = i * 2; j < n; j += i) {
                is_prime[j] = false;
            }
        }
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert (issame(count_up_to(101) , {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97}));
  
    return 0;
}