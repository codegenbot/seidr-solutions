#include <vector>
#include <string>

using namespace std;

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

int sumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int skjkasdkd(vector<int> lst) {
    int maxPrime = 0;
    for (int num : lst) {
        if (isPrime(num) && num > maxPrime) {
            maxPrime = num;
        }
    }
    return sumOfDigits(maxPrime);
}