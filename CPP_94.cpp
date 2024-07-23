#include <cassert>
#include <vector>
#include <iostream>

int skjkasdkd(std::vector<int> lst) {
    int maxPrime = 0;
    for(int num : lst){
        if(isPrime(num) && num > maxPrime)
            maxPrime = num;
    }
    int sumOfDigits = 0;
    while(maxPrime > 0){
        sumOfDigits += maxPrime % 10;
        maxPrime /= 10;
    }
    return sumOfDigits;
}

bool isPrime(int n) {
    if(n <= 1) return false;
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0)
            return false;
    }
    return true;

int main() {
    int num;
    std::cout << "Enter numbers (separated by spaces): ";
    while(std::cin >> num) {
        std::vector<int> lst = {};
        while(num > 0){
            lst.push_back(num % 10);
            num /= 10;
        }
        if(!lst.empty())
            std::cout << "Sum of digits for this number: " << skjkasdkd(lst) << std::endl;
    }
    return 0;
}