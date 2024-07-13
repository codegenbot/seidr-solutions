#include <vector>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int skjkasdkd(vector<int> lst) {
    int maxPrime = 0, sum = 0;
    for (int num : lst) {
        if (isPrime(num)) {
            maxPrime = num;
            break;
        }
    }
    int temp = maxPrime;
    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }
    return sum;
}