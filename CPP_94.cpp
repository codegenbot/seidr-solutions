#include <cassert>
#include <vector>

int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) 
        if (num % i == 0) return false;
    return true;
}

int findMaxPrime(std::vector<int> numbers) {
    int maxPrime = -1;
    for (int num : numbers) {
        if (isPrime(num)) {
            if (num > maxPrime) 
                maxPrime = num;
        }
    }
    return maxPrime;
}

int main() {
    assert(sumOfDigits(findMaxPrime({127, 97, 8192})) == 10);
    return 0;
}