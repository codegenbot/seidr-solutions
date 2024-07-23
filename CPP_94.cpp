#include <cassert>
#include <vector>

int sumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int findMaxPrime(int* numbers, int size) {
    int maxPrime = -1;
    for (int i = 0; i < size; i++) {
        if (isPrime(numbers[i])) {
            if (numbers[i] > maxPrime) {
                maxPrime = numbers[i];
            }
        }
    }
    return maxPrime;
}

int main() {
    int numbers[] = {127, 97, 8192};
    assert(sumOfDigits(findMaxPrime(numbers, sizeof(numbers)/sizeof(numbers[0]))) == 7);
    return 0;
}