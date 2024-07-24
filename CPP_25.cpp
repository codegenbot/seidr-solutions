#include <vector>
using namespace std;

vector<int> factorize(int n) {
    vector<int> factors;
    for (int i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            int count = 0;
            while (n % i == 0) {
                n /= i;
                count++;
            }
            factors.push_back(i);
            if (count > 0) {
                for (int j = 1; j <= count; j++) {
                    factors.push_back(i);
                }
            }
        }
    }
    if (n > 1) {
        int count = 0;
        while (n % 2 == 0) {
            n /= 2;
            count++;
        }
        for (int i = 0; i <= count; i++) {
            factors.push_back(2);
        }
        if (n > 1) {
            factors.push_back(n);
        }
    } else {
        if (n > 1) {
            factors.push_back(n);
        }
    }
    return factors;
}