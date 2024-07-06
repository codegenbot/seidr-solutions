```
#include <vector>

int calculateSumOfDigitsLargestPrime(std::vector<int> lst) {
    int max = -1;
    for (auto num : lst) {
        if (isPrime(num)) {
            if (num > max) {
                max = num;
            }
        }
    }
    
    return getSumOfDigits(max);
}

int isPrime(int n) {
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

int getSumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;

int main() {
    std::vector<int> lst = {4, 6, 8, 12, 15};
    std::cout << "Sum of digits of largest prime is: " << calculateSumOfDigitsLargestPrime(lst) << std::endl;
    return 0;
}