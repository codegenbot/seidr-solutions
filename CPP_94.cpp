#include<stdio.h>
#include<vector>
#include<string>
using namespace std;

int skjkasdkd(vector<int> lst){
    int maxPrime = 0;
    for(int i : lst){
        if(isPrime(i)){
            if(maxPrime < i) maxPrime = i;
        }
    }

    if(maxPrime > 0)
        return sumOfDigits(maxPrime);
    else
        return 0;
}

bool isPrime(int num){
    if(num <= 1) return false;
    for(int i = 2; i*i <= num; i++){
        if(num % i == 0) return false;
    }
    return true;
}

int sumOfDigits(int n){
    int sum = 0;
    while(n > 0){
        sum += n%10;
        n /= 10;
    }
    return sum;
}