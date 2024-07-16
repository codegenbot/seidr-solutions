#include <iostream>
#include <vector>

int skjkasdkd(std::vector<int> lst){
    int maxPrime = 0;
    for(int i : lst){
        if(i > 1 && isPrime(i)){
            maxPrime = i;
            break;
        }
    }
    return sumOfDigits(maxPrime);
}

bool isPrime(int num){
    if(num <= 1) return false;
    for(int i = 2; i*i <= num; i++){
        if(num % i == 0) return false;
    }
    return true;
}

int sumOfDigits(int num){
    int sum = 0;
    while(num > 0){
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main(){
    std::vector<int> lst;
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    for(int i = 0; i < n; i++){
        std::cout << "Enter element " << (i+1) << ": ";
        int x;
        std::cin >> x;
        lst.push_back(x);
    }
    std::cout << "The sum of digits in the largest prime number is: " << skjkasdkd(lst) << std::endl;
    return 0;
}