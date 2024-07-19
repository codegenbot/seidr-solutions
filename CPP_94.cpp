#include <vector>
#include <cassert>

int skjkasdkd(vector<int> lst) {
    int maxPrime = 0;
    for (int num : lst) {
        if (isPrime(num)) {
            if (num > maxPrime) {
                maxPrime = num;
            }
        }
    }
    return sumOfDigits(maxPrime);
}

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
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

int main() {
    vector<int> test1 = {2, 3, 4, 5};
    assert(skjkasdkd(test1) == 7);
    
    vector<int> test2 = {11, 12, 13, 14};
    assert(skjkasdkd(test2) == 9);
    
    return 0;
}