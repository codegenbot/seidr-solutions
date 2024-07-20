#include <vector>
#include <iostream>

int sumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int skjkasdkd(vector<int> lst) {
    int maxPrime = -1;
    for (int i : lst) {
        if (isPrime(i)) {
            if (i > maxPrime) {
                maxPrime = i;
            }
        }
    }
    if (maxPrime != -1) {
        return sumOfDigits(maxPrime);
    } else {
        return 0;
    }
}

bool isPrime(int n) {
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

int main() {
    int n;
    std::cout << "Enter the number of elements in the list: ";
    std::cin >> n;

    vector<int> lst(n);
    for(int i = 0; i < n; i++) {
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> lst[i];
    }

    std::cout << "The sum of digits of the maximum prime number is: " << skjkasdkd(lst) << std::endl;

    return 0;
}