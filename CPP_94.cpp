#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int skjkasdkd(vector<int> lst){
    int sum = 0;
    for(int it:lst){
        if(isPrime(it)) 
            while(it > 0){sum += it%10;it/=10;}
    }
    return sum;
}