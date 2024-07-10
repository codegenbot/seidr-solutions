#include <iostream>
#include <vector>

int skjkasdkd(std::vector<int> lst);
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int sumOfDigits(int n) {
    int sum = 0;
    while(n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    std::vector<int> lst = {127, 97, 8192};
    std::cout << skjkasdkd(lst) << std::endl; 
    return 0;
}