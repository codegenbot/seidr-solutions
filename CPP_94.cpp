```cpp
#include <iostream>
#include <vector>
using namespace std;

int calculateSumOfDigitsLargestPrime(vector<int> lst) {
    int maxPrime = -1;
    for (int num : lst) {
        bool isPrime = true;
        if (num > 1) {
            for (int i = 2; i * i <= num; i++) {
                if (num % i == 0) {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime) {
                maxPrime = num;
                break;
            }
        }
    }
    int sumDigits = 0;
    if (maxPrime != -1) {
        while (maxPrime > 0) {
            sumDigits += maxPrime % 10;
            maxPrime /= 10;
        }
    }
    return sumDigits;
}

int main_test() {
    int num;
    cout << "Enter the list of numbers (space separated): ";
    cin >> num;
    vector<int> lst = {num};
    cout << "The sum of digits for the largest prime is: " << calculateSumOfDigitsLargestPrime(lst) << endl;
    return 0;
}