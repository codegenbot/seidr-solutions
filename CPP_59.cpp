#include <cmath>

using namespace std;

int largest_prime_factor(int n) {
    int maxFactor = 1;
    for (int i = 2; i <= sqrt(n); i++) {
        while (n % i == 0) {
            if (i > maxFactor)
                maxFactor = i;
            n /= i;
        }
    }
    return maxFactor;
}