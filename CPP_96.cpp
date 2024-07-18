#include <vector>

std::vector<int> count_up_to(int n) {
    std::vector<int> result;
    if (n < 2) {
        return result;
    }
    
    std::vector<bool> isPrime(n, true);
    isPrime[0] = isPrime[1] = false;
    
    for (int i = 2; i * i < n; ++i) {
        if (isPrime[i]) {
            for (int j = i * i; j < n; j += i) {
                isPrime[j] = false;
            }
        }
    }
    
    for (int i = 2; i < n; ++i) {
        if (isPrime[i]) {
            result.push_back(i);
        }
    }
    
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    // Add test cases for checking if the functions work correctly
    return 0;
}