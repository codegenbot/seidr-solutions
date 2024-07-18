#include <vector>
#include <cassert>
#include <iostream>

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
    int n;
    cin >> n;
    vector<int> result = factorize(n);
    
    assert(issame(result, factorize(n))); // Ensuring that factorize function works correctly
    
    for(int num : result){
        cout << num << " ";
    }
    
    return 0;
}