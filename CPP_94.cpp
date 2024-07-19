#include<stdio.h>
#include<vector>
#include<string>
using namespace std;
int skjkasdkd(vector<int> lst){
    int maxPrimeSum = 0;
    for (int num : lst) {
        if (num < 2) continue;
        bool isPrime = true;
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            int sum = 0;
            int temp = num;
            while (temp > 0) {
                sum += temp % 10;
                temp /= 10;
            }
            if (sum > maxPrimeSum) {
                maxPrimeSum = sum;
            }
        }
    }
    return maxPrimeSum;
}