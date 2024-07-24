```cpp
#include <iostream>
#include <vector>

std::vector<int> lst;

int maxPrimeNum = 0;

// Function to check if a number is prime
bool isPrime(int x) {
    // Check divisibility from 2 to sqrt(x)
    for (int i = 2; i <= std::sqrt(x); i++) {
        if (x % i == 0) return false;
    }
    return true;
}

// Function to calculate the sum of digits
int sumOfDigits(int x) {
    int sum = 0;
    while (x > 0) {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

int originalMain() {
    int num, i;
    std::cout << "Enter the number of elements in the list: ";
    std::cin >> num;
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

int main() {
    originalMain();
    return 0;
}