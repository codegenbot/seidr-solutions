#include <vector>
#include <cassert>

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

int main(){
    std::vector<int> factors = factorize(30);
    std::vector<int> expected_factors = {2, 3, 5};
    assert(issame(factors, expected_factors));
    
    return 0;
}