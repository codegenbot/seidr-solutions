#include <vector>

vector<int> factorize(int n){
    vector<int> factors;
    for(int i = 2; i * i <= n; i++){
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

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

int main(){
    vector<int> factors = factorize(30);
    return 0;
}