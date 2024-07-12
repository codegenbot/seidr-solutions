#include <vector>
#include <cassert>

vector<int> factorize(int n){
    vector<int> factors;
    for(int i=2; i*i<=n; i++){
        while(n%i == 0){
            factors.push_back(i);
            n /= i;
        }
    }
    if(n > 1){
        factors.push_back(n);
    }
    return factors;
}

int main() {
    vector<int> expected_factors = {2, 2, 3, 5};
    assert(factorize(60) == expected_factors);
    return 0;
}