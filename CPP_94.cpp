#include <vector>
#include <iostream>

int main() {
    std::vector<int> lst;
    int num;
    while (true) {
        std::cout << "Enter a number (-1 to finish): ";
        std::cin >> num;
        if (num == -1) break;
        lst.push_back(num);
    }
    int result = skjkasdkd(lst);
    std::cout << "The sum of digits for the maximum prime is: " << result << std::endl;
    return 0;
}

int skjkasdkd(std::vector<int> lst) {
    int maxPrime = 0;
    for (int num : lst) {
        if (isPrime(num)) {
            if (num > maxPrime) {
                maxPrime = num;
            }
        }
    }
    return sumOfDigits(maxPrime);
}

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int sumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}