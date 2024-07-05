#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;
    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) return false;
    }
    return true;
}

int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int skjkasdkd(vector<int> lst) {
    int largestPrime = -1;
    for (int num : lst) {
        if (isPrime(num)) {
            largestPrime = max(largestPrime, num);
        }
    }
    return largestPrime == -1 ? 0 : sumOfDigits(largestPrime);
}