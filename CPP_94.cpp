```c++
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
    int input;
    std::cout << "Enter a vector of integers: ";
    std::vector<int> lst;
    while(std::cin >> input){
        lst.push_back(input);
    }
    int result = skjkasdkd(lst);
    std::cout << "Sum of digits for the maximum prime in the given vector is: " << result << std::endl;
}