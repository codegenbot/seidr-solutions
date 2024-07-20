Here is the completed code:

#include <vector>

using namespace std;

int largestPrimeSum(vector<int>& lst) {
    int maxPrime = -1;
    for (int num : lst) {
        if (isPrime(num)) {
            maxPrime = num;
            break;
        }
    }
    
    return (maxPrime > 0 ? sumOfDigits(maxPrime) : 0);
}

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
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