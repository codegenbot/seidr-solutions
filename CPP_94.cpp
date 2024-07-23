```cpp
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
    if(maxPrime == -1) return 0; 
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

int main{
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    std::vector<int> lst(10);
    for(int i = 0; i < 10; i++){
        lst[i] = i + 1;
    }
    int result = skjkasdkd(lst);
    if(result == 0) 
        std::cout << "No prime found in the list.";
    else
        std::cout << "The sum of digits of the largest prime is: " << result;
}