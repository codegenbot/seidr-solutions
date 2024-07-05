#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    if (num <= 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return false;
    }
    return true;
}

int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int largestPrimeDigitSum(const vector<int>& lst) {
    int largestPrime = -1;
    for (int num : lst) {
        if (isPrime(num) && num > largestPrime) {
            largestPrime = num;
        }
    }
    return largestPrime != -1 ? sumOfDigits(largestPrime) : 0;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> lst(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> lst[i];
    }

    int result = largestPrimeDigitSum(lst);
    cout << "Result: " << result << endl;

    return 0;
}