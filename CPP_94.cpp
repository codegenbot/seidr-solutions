#include <cassert>

int sumOfDigits(int n) {
    int result = 0;
    while (n > 0) {
        result += n % 10;
        n /= 10;
    }
    return result;
}

int findMaxPrime(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max && isPrime(arr[i])) {
            max = arr[i];
        }
    }
    return max;
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

int main() {
    int numbers[] = {127, 97, 8192};
    int size = sizeof(numbers)/sizeof(numbers[0]);
    assert(sumOfDigits(findMaxPrime(numbers, size)) == 10);
    return 0;
}