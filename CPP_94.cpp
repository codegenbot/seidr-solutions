#include <cassert>

int findMaxPrime(int arr[]) {
    int max = arr[0];
    for (int i = 1; i < sizeof(arr)/sizeof(arr[0]); i++) {
        if (arr[i] > max && isPrime(arr[i])) {
            max = arr[i];
        }
    }
    return max;
}

bool isPrime(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
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