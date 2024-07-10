#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

std::vector<int> factorize(int n) {
    std::vector<int> factors;
    if (n == 0) {
        factors.push_back(0);
        return factors;
    }
    if (n == 1) {
        factors.push_back(1);
        return factors;
    }
    if (n < 0) {
        factors.push_back(-1);
        n = abs(n);
    }
    for (int i = 2; i * i <= n; ++i) {
        while (n % i == 0) {
            factors.push_back(i);
            n /= i;
        }
    }
    if (n > 1) {
        factors.push_back(n);
    }
    return factors;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    vector<int> factors = factorize(num);
    
    cout << "Factors: ";
    for (int factor : factors) {
        cout << factor << " ";
    }
    
    return 0;
}