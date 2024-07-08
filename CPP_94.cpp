#include <iostream>
#include <vector>

int skjkasdkd(int num) {
    std::vector<int> lst;
    int maxPrime = 0;
    for(int i=0; i<num; i++){
        int n;
        std::cout << "Enter number: ";
        std::cin >> n;
        lst.push_back(n);
        if(isPrime(n)){
            if(maxPrime < n){
                maxPrime = n;
            }
        }
    }
    int sumOfDigits = 0;
    while(maxPrime > 0){
        sumOfDigits += maxPrime % 10;
        maxPrime /= 10;
    }
    return sumOfDigits;
}

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}