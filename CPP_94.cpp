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

int largestPrime(vector<int> lst) {
    int maxPrime = -1;
    for (int i : lst) {
        if (isPrime(i)) {
            if (i > maxPrime)
                maxPrime = i;
        }
    }
    return maxPrime;
}

bool isPrime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int findSumOfDigits(vector<int> lst) {
    int maxPrime = largestPrime(lst);
    if (maxPrime < 0)
        return -1;
    else
        return sumOfDigits(maxPrime);
}

int main() {
    vector<int> numbers;
    cout << "Enter the numbers: ";
    int n;
    while ((cin >> n) && n != -1) {
        numbers.push_back(n);
    }
    if (numbers.size() > 0) {
        cout << "Sum of digits of largest prime number is: " << findSumOfDigits(numbers) << endl;
    } else {
        cout << "No numbers entered." << endl;
    }
    return 0;
}