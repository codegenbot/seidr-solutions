#include <vector>

vector<int> factorize(int n);

bool issame(const vector<int>& v1, const vector<int>& v2) {
    return v1 == v2;
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

int main() {
    // Main function usage example
    int num = 60;
    vector<int> factors = factorize(num);
    return 0;
}