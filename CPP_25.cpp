#include <vector>
#include <algorithm>
#include <iostream>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    return a == b;
}

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
    return factors;
}

int main(){
    int x, y;
    std::cin >> x >> y;

    std::vector<int> factors_x = factorize(x);
    std::vector<int> factors_y = factorize(y);

    assert(issame(factors_x, factors_y));

    return 0;
}