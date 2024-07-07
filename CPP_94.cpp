#include <vector>
#include <string>

using namespace std;

int sumOfDigitsLargestPrime(int val) {
    if (val <= 1) return 0;
    for (long long i = val; i > 1; --i)
        if (isPrime(i))
            return val;
    return 0;
}

bool isPrime(long long val) {
    if (val < 2) return false;
    for (long long i = 2, sqrt_val = sqrt(val); i <= sqrt_val; ++i)
        if (val % i == 0)
            return false;
    return true;
}

int skjkasdkd(vector<int> lst) {
    int maxPrime = 0;
    for (int val : lst) {
        if (isPrime(val)) {
            if (val > maxPrime) {
                maxPrime = val;
            }
        }
    }
    if (maxPrime == 0) return 0;
    int sum = 0;
    while (maxPrime > 0) {
        sum += maxPrime % 10;
        maxPrime /= 10;
    }
    return sum;
}