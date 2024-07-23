```cpp
#include <cassert>

int sumOfDigits(int num) {
    int sum = 0;
    while(num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int findMaxPrime(int arr[]) {
    int max = 0;
    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
        if(isPrime(arr[i])) {
            if(arr[i] > max) {
                max = arr[i];
            }
        }
    }
    return max;
}

int isPrime(int num) {
    if(num <= 1) {
        return 0;
    }
    for(int i = 2; i * i <= num; i++) {
        if(num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int problemSolver() {
    assert(sumOfDigits(findMaxPrime({127, 97, 8192})) == 7);
    return 0;
}