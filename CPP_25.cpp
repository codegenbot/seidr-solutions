#include <vector>
#include <algorithm>

using namespace std;

std::vector<int> factorize(int n) {
    std::vector<int> factors;
    if(n < 2) {
        factors.push_back(n);
        return factors;
    }
    for (int i = 2; i <= n; ++i) {
        while (n % i == 0) {
            factors.push_back(i);
            n /= i;
        }
    }
    return factors;
}