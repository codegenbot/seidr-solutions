#include <iostream>
#include <vector>

using namespace std;

vector<int> factorize(int n) {
    vector<int> factors;
    
    for (int i = 2; i <= n; i++) {
        while (n % i == 0) {
            factors.push_back(i);
            n /= i;
        }
    }
    
    return factors;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    vector<int> primeFactors = factorize(n);
    
    cout << "Prime factors: ";
    for (int factor : primeFactors) {
        cout << factor << " ";
    }
    
    return 0;
}