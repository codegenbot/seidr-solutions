#include <vector>

bool issame(vector<int> factors){
    for(int i = 0; i < factors.size() - 1; i++){
        if(factors[i] != factors[i+1]){
            return false;
        }
    }
    return true;
}

vector<int> factorize(int n){
    vector<int> factors;
    for(int i = 2; i <= n; i++){
        while(n % i == 0){
            factors.push_back(i);
            n /= i;
        }
    }
    return factors;
}

int main(){
    int n;
    cin >> n;
    vector<int> result = factorize(n);
    
    if(issame(result)){
        cout << "All prime factors are same" << endl;
    } else{
        cout << "All prime factors are not same" << endl;
    }
    
    return 0;
}