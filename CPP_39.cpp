#include<iostream>
#include<vector>
using namespace std;

bool isPrime(int num){
    if(num <= 1){
        return false;
    }
    for(int i=2; i*i<=num; i++){
        if(num % i == 0){
            return false;
        }
    }
    return true;
}

int prime_fib(int n){
    vector<int> fib = {1, 1};
    while(fib.size() <= n){
        fib.push_back(fib[fib.size()-1] + fib[fib.size()-2]);
    }
    for(int i=0; i<fib.size(); i++){
        if(isPrime(fib[i])){
            n--;
            if(n == 0){
                return fib[i];
            }
        }
    }
    return -1;
}