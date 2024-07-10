#include <vector>
#include <cassert>

std::vector<int> factorize(int n){
    std::vector<int> factors;
    for(int i = 2; i <= n; i++){
        while(n % i == 0){
            factors.push_back(i);
            n /= i;
        }
    }
    return factors;
}