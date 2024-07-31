#include <vector>
using namespace std;

int sumOfDigits(int n) {
    int sum = 0;
    while (n) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int largestPrime(vector<int> lst) {
    int maxPrime = 0;
    for (int i : lst) {
        bool isPrime = true;
        if (i < 2)
            continue;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime && i > maxPrime)
            maxPrime = i;
    }
    return sumOfDigits(maxPrime);
}