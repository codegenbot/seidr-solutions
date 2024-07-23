#include <cassert>

int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int findMaxPrime(int arr[], int n) {
    int max = -1;
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            if (arr[i] > max) {
                max = arr[i];
            }
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

int problemSolver() {
    assert(sumOfDigits(findMaxPrime({127, 97, 8192})) == 7);
    return 0;
}