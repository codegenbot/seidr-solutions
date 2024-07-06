#include <vector>
#include <iostream>

using namespace std;

int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
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

int calculateSumOfDigitsLargestPrime(vector<int> lst) {
    int maxPrime = largestPrime(lst);
    return sumOfDigits(maxPrime);
}

int main() {
    vector<int> lst;
    cout << "Enter the numbers (separated by spaces): ";
    while (true) {
        int num; 
        cin >> num;
        if (!cin) break;
        lst.push_back(num);
    }
    cout << "The sum of digits for the largest prime in the list is: " << calculateSumOfDigitsLargestPrime(lst) << endl;
    return 0;
}