#include <iostream>
#include <vector>

using namespace std;

int skjkasdkd(vector<int> lst) {
    int largestPrime = 0;
    for (int i = 0; i < lst.size(); i++) {
        int num = lst[i];
        bool isPrime = true;
        if (num > 1) {
            for (int j = 2; j <= num / 2; j++) {
                if (num % j == 0) {
                    isPrime = false;
                    break;
                }
            }
        } else {
            isPrime = false;
        }
        if (isPrime && num > largestPrime) {
            largestPrime = num;
        }
    }
    int sumOfDigits = 0;
    while (largestPrime > 0) {
        sumOfDigits += largestPrime % 10;
        largestPrime /= 10;
    }
    return sumOfDigits;
}