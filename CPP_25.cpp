#include <vector>
#include <algorithm>

std::vector<int> factorize(int n){
    std::vector<int> factors;
    for(int i=1; i*i<=n; i++){
        if(n%i == 0){
            factors.push_back(i);
            if(i != n/i){
                factors.push_back(n/i);
            }
        }
    }
    std::sort(factors.begin(), factors.end());
    return factors;
}

bool issame(std::vector<int> a, std::vector<int> b){
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    return a == b;
}