```c
#include <iostream>
#include <vector>

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int skjkasdkd() {
    std::vector<int> lst;
    int maxPrime = 0;
    for(int i=0; i<3; i++){
        int num;
        std::cout << "Enter number: ";
        std::cin >> num;
        lst.push_back(num);
        if(isPrime(num)){
            if(maxPrime < num){
                maxPrime = num;
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

int main() {
    std::cout << skjkasdkd();
}