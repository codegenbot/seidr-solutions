#include <iostream>
#include <vector>

int skjkasdkd(std::vector<int> lst){
    int maxPrime = -1;
    for(int i : lst){
        if(i > 1 && isPrime(i)){
            maxPrime = i;
            break;
        }
    }
    if(maxPrime == -1) return 0; // No prime found
    int sumOfDigits = 0;
    while(maxPrime > 0){
        sumOfDigits += maxPrime % 10;
        maxPrime /= 10;
    }
    return sumOfDigits;
}

bool isPrime(int n){
    if(n <= 1) return false;
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0) return false;
    }
    return true;

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    std::vector<int> lst;
    while(num > 0){
        lst.push_back(num % 10);
        num /= 10;
    }
    std::cout << "Sum of digits is : " << skjkasdkd(lst) << std::endl;
}