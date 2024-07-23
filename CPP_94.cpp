````
#include <cassert>

int findMaxPrime(int arr[]) {
    int maxPrime = -1;
    for (int num : arr) {
        if (isPrime(num)) {
            if (num > maxPrime)
                maxPrime = num;
        }
    }
    return maxPrime;
}

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;

    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0)
            return false;
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

int main() {
    assert(sumOfDigits(findMaxPrime({127, 97, 8192})) == 10);
    return 0;
}
```