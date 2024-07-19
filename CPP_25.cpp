#include <vector>

bool issame(vector<int> a, vector<int> b){

}

vector<int> factorize(int n);

int main() {
    // Add your test cases here
    return 0;
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