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
    int N;
    std::cout << "Enter the number of elements: ";
    std::cin >> N;

    vector<int> lst(N);
    for (int i = 0; i < N; i++) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> lst[i];
    }

    int result = skjkasdkd(lst);

    std::cout << "The sum of digits of the maximum prime number is: " << result << std::endl;

    return 0;
}