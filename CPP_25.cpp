#include <vector>
#include <iostream> 

using namespace std;

vector<int> factorize(int n) {
    vector<int> factors;
    for (int i = 2; i * i <= n; ++i) {
        while (n % i == 0) {
           s.push_back(i);
            n /= i;
        }
    }
    if (n > 1) {
        factors.push_back(n);
    }
    return factors;
}

int main() {
    vector<int> result = factorize(3 * 2 * 3);
    for (int num : result) {
        cout << num << " ";
    }
}