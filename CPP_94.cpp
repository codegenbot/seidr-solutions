```cpp
#include <vector>
#include <iostream>

int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int largestPrime(vector<int> lst) {
    int maxPrime = -1;
    for (int i : lst) {
        if (isPrime(i)) {
            maxPrime = i > maxPrime ? i : maxPrime;
        }
    }
    return maxPrime;
}

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int calculateSumOfDigitsLargestPrime(vector<int> lst) {
    int maxPrime = largestPrime(lst);
    return sumOfDigits(maxPrime);
}

int main() {
    vector<int> lst = {2, 3, 5};
    cout << "The sum of digits for the largest prime in the list is: " << calculateSumOfDigitsLargestPrime(lst) << "\n";
    return 0;
}