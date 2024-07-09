#include <iostream>
#include <vector>

int skjkasdkd(std::vector<int> lst){
    int maxPrime = 0;
    for(int i: lst){
        if(isPrime(i) && i > maxPrime)
            maxPrime = i;
    }
    int sumOfDigits = 0;
    while(maxPrime > 0){
        sumOfDigits += maxPrime % 10;
        maxPrime /= 10;
    }
    return sumOfDigits;
}

bool isPrime(int n){
    if(n <= 1)
        return false;
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0)
            return false;
    }
    return true;

int main(){
    std::vector<int> lst;
    int N;
    std::cout << "Enter the number of elements in your list: ";
    std::cin >> N;
    
    for(int i = 1; i <= N; i++){
        int num;
        std::cout << "Enter element no." << i << ":";
        std::cin >> num;
        lst.push_back(num);
    }
    std::cout << "The sum of the digits of the maximum prime number in the list is: ";
    std::cout << skjkasdkd(lst) << "\n";
    return 0;
}