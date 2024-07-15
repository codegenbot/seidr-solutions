#include<stdio.h>
#include<vector>
#include<string>
using namespace std;
int skjkasdkd(vector<int> lst){
    int maxPrime = -1;
    for (int num : lst) {
        if (num < 2) continue;
        bool isPrime = true;
        for (int i = 2; i*i <= num; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime && num > maxPrime) {
            maxPrime = num;
        }
    }
    if (maxPrime == -1) return 0;
    
    int sumDigits = 0;
    while (maxPrime > 0) {
        sumDigits += maxPrime % 10;
        maxPrime /= 10;
    }
    return sumDigits;
}