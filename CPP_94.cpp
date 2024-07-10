#include<stdio.h>
#include<vector>
#include<string>
using namespace std;
int skjkasdkd(vector<int> lst){
    int maxPrime = -1;
    for (int num : lst) {
        bool isPrime = true;
        if (num <= 1) {
            isPrime = false;
        } else {
            for (int i = 2; i * i <= num; i++) {
                if (num % i == 0) {
                    isPrime = false;
                    break;
                }
            }
        }
        if (isPrime && num > maxPrime) {
            maxPrime = num;
        }
    }
    int sumDigits = 0;
    while (maxPrime > 0) {
        sumDigits += maxPrime % 10;
        maxPrime /= 10;
    }
    return sumDigits;
}