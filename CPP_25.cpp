#include <vector>
#include <cassert>

vector<int> factorize(int n);
void issame(vector<int> vec1, vector<int> vec2);

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
    vector<int> result = factorize(100);
    assert(result == vector<int>{2, 2, 5, 5});
    
    return 0;
}