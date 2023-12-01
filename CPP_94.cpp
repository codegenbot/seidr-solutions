#include <iostream>
#include <vector>

int largestPrimeSum(vector<int> lst) {
    int maxPrime = 0;
    for (int num : lst) {
        if (num > maxPrime && isPrime(num)) {
            maxPrime = num;
        }
    }
    return sumOfDigits(maxPrime);
}

bool isPrime(int num) {
    if (num < 2) {
        return false;
    }
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return false;
        }
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

int main() {
    vector<int> lst = {0,3,2,1,3,5,7,4,5,5,5,2,181,32,4,32,3,2,32,324,4,3};
    cout << largestPrimeSum(lst) << endl;
    
    lst = {1,0,1,8,2,4597,2,1,3,40,1,2,1,2,4,2,5,1};
    cout << largestPrimeSum(lst) << endl;
    
    lst = {1,3,1,32,5107,34,83278,109,163,23,2323,32,30,1,9,3};
    cout << largestPrimeSum(lst) << endl;
    
    lst = {0,724,32,71,99,32,6,0,5,91,83,0,5,6};
    cout << largestPrimeSum(lst) << endl;
    
    lst = {0,81,12,3,1,21};
    cout << largestPrimeSum(lst) << endl;
    
    lst = {0,8,1,2,1,7};
    cout << largestPrimeSum(lst) << endl;
    
    return 0;
}