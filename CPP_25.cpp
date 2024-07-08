#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b);

std::vector<int> factorize(int n){
    std::vector<int> factors;
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

bool issame(std::vector<int> a, std::vector<int> b){
    if(a.size() != b.size()) return false;
    
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]) return false;
    }
    
    return true;
}

int main() {
    std::vector<int> a = factorize(30);
    std::vector<int> b = factorize(15);
    
    assert(issame(a, b) == true);
    
    return 0;
}