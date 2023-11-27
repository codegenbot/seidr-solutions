#include <iostream>
#include <vector>
#include <cassert>

int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int largestPrimeSum(const std::vector<int>& nums) {
    int largestPrime = 0;
    for (int num : nums) {
        bool isPrime = true;
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime && num > largestPrime) {
            largestPrime = num;
        }
    }
    return sumOfDigits(largestPrime);
}

int main() {
    assert(largestPrimeSum(std::vector<int>{127, 97, 8192}) == 10);
}