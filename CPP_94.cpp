Here is the completed code:

#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int skjkasdkd(vector<int> lst) {
    int max_prime = 0;
    for (auto x : lst) {
        if (isPrime(x)) {
            max_prime = max(max_prime, x);
        }
    }

    int sum = 0;
    while (max_prime > 0) {
        sum += max_prime % 10;
        max_prime /= 10;
    }

    return sum;
}

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}