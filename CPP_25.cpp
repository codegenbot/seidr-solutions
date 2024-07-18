#include <vector>
#include <cassert>

std::vector<int> factorize(int n);

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> factorize(int n){
    std::vector<int> factors;
    for(int i = 2; i * i <= n; ++i){
        while(n % i == 0){
            factors.push_back(i);
            n /= i;
        }
    }
    if(n > 1){
        factors.push_back(n);
    }
    return factors;
}