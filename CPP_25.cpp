#include <cassert>
#include <iostream>
#include <vector>

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

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
    // Test cases
    assert(issame(factorize(12), {2, 2, 3}));
    assert(issame(factorize(30), {2, 3, 5}));
    
    std::cout << "All test cases pass\n";
    
    return 0;
}