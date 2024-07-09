#include <vector>
#include <iostream>

bool issame(int a, int b) {
    return a == b;
}

std::vector<int> count_up_to(int n);

int main() {
    int n;
    std::cin >> n;
    
    std::vector<int> result = count_up_to(n);
    
    for (int num : result) {
        std::cout << num << " ";
    }
    
    return 0;
}

std::vector<int> count_up_to(int n) {
    std::vector<int> result;
    if (n <= 1) {
        return result;
    }
    
    std::vector<bool> isPrime(n, true);
    isPrime[0] = isPrime[1] = false;
    
    for (int i = 2; i < n; ++i) {
        if (isPrime[i]) {
            result.push_back(i);
            for (int j = i * 2; j < n; j += i) {
                isPrime[j] = false;
            }
        }
    }
    
    return result;
}