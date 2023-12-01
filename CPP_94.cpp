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

int main() {
    vector<int> lst = {0, 3, 2, 1, 3, 5, 7, 4, 5, 5, 5, 2, 181, 32, 4, 32, 3, 2, 32, 324, 4, 3};
    cout << skjkasdkd(lst) << endl;

    lst = {1, 0, 1, 8, 2, 4597, 2, 1, 3, 40, 1, 2, 1, 2, 4, 2, 5, 1};
    cout << skjkasdkd(lst) << endl;

    lst = {1, 3, 1, 32, 5107, 34, 83278, 109, 163, 23, 2323, 32, 30, 1, 9, 3};
    cout << skjkasdkd(lst) << endl;

    lst = {0, 724, 32, 71, 99, 32, 6, 0, 5, 91, 83, 0, 5, 6};
    cout << skjkasdkd(lst) << endl;

    lst = {0, 81, 12, 3, 1, 21};
    cout << skjkasdkd(lst) << endl;

    lst = {0, 8, 1, 2, 1, 7};
    cout << skjkasdkd(lst) << endl;

    return 0;
}