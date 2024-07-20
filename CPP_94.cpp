Here is the completed code:

#include <algorithm>
#include <vector>

using namespace std;

int skjkasdkd(vector<int> lst) {
    vector<int> primes;
    for (int x : lst) {
        if (isPrime(x)) {
            primes.push_back(x);
        }
    }
    int result = 0;
    if (!primes.empty()) {
        result = primes[0];
        for (int i = 1; i < primes.size(); i++) {
            if (primes[i] > result) {
                result = primes[i];
            }
        }
        int sum = 0;
        while (result > 0) {
            sum += result % 10;
            result /= 10;
        }
        return sum;
    } else {
        return 0;
    }
}

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}