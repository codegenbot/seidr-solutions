#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<int> factorize(int n) {
    vector<int> factors;
    for (int i = 2; i <= sqrt(n); i++) {
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