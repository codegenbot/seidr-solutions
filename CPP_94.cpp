```cpp
#include <cassert>
#include <initializer_list>
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

int findMaxPrime(const std::vector<int>& numbers) {
    int maxPrime = -1;
    for (int number : numbers) {
        if (isPrime(number)) {
            if (number > maxPrime) {
                maxPrime = number;
            }
        }
    }
    return maxPrime;
}

int main() {
    assert(findMaxPrime({127, 97, 8192}) == 127);
    return 0;
}