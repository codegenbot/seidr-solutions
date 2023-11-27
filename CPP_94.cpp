#include <iostream>
#include <vector>

int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    std::cout << sumOfDigits(largestPrimeSum({127, 97, 8192})) << std::endl;
}