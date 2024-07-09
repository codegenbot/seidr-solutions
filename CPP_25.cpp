#include <vector>

using namespace std;

vector<int> factorize(int n) {
    vector<int> factors;
    for (int i = 2; i * i <= n; ++i) {
        while (n % i == 0) {
            int count = 0;
            while (n % i == 0) {
                n /= i;
                ++count;
            }
            if (count > 0) {
                factors.push_back(i);
                for (int j = 1; j < count; ++j) {
                    factors.push_back(i);
                }
            }
        }
    }

    // If n is a prime number greater than 2
    if (n > 1) {
        int count = 0;
        while (n % 2 == 0) {
            n /= 2;
            ++count;
        }
        if (count > 0) {
            for (int i = 0; i <= count; ++i) {
                factors.push_back(2);
            }
        } else {
            factors.push_back(n);
        }
    }

    return factors;
}