#include <vector>

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

int main(){
    // Function usage example
    int number = 24;
    vector<int> primeFactors = factorize(number);
    for(int factor : primeFactors){
        cout << factor << " ";
    }
    cout << endl;
    
    return 0;
}