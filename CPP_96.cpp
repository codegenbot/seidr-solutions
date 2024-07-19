#include <vector>

std::vector<int> count_up_to(int n);

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

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