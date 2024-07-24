#include <iostream>
#include <vector>

int maxPrimeNum = 0;
std::vector<int> lst;

bool isPrime(int x) {
    for (int i = 2; i <= std::sqrt(x); i++) {
        if (x % i == 0) return false;
    }
    return true;
}

int sumOfDigits(int x) {
    int sum = 0;
    while (x > 0) {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

int main() {
    int num, i;
    std::cout << "Enter the number of elements in the list: ";
    std::cin >> num;
    lst = std::vector<int>();
    for(i = 0; i < num; i++){
        std::cout << "Enter element " << i+1 << ": ";
        int x; 
        std::cin >> x; 
        lst.push_back(x);
    }
    for(int j : lst){
        if(isPrime(j) && j > maxPrimeNum)
            maxPrimeNum = j;
    }
    if(maxPrimeNum > 0)
        std::cout << "The sum of digits of the maximum prime is: " << sumOfDigits(maxPrimeNum) << std::endl;
    else
        std::cout << "No primes found in the list." << std::endl;
    return 0;
}