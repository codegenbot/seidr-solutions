#include <vector>
#include <cassert>

vector<int> factorize(int n);

bool issame(vector<int> a, vector<int> b){
    // code for comparing two vectors
}

int main(){
    assert(issame(factorize(3 * 2 * 3), {2, 3, 3}));
    // more test cases
}

vector<int> factorize(int n){
    vector<int> factors;
    for(int i=2; i<=n; i++){
        while(n%i == 0){
            factors.push_back(i);
            n /= i;
        }
    }
    return factors;
}