Here is the completed code:

#include<stdio.h>
#include<vector>
#include<string>
using namespace std;

int skjkasdkd(vector<int> lst){
    int maxPrime = 0;
    for(int i = 0; i < lst.size(); i++){
        if(isPrime(lst[i])){
            if(lst[i] > maxPrime) maxPrime = lst[i];
        }
    }
    int sum = 0;
    while(maxPrime > 0){
        sum += maxPrime % 10;
        maxPrime /= 10;
    }
    return sum;
}

bool isPrime(int n){
    if(n <= 1) return false;
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0) return false;
    }
    return true;
}