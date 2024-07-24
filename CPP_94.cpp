#include <iostream>
#include <vector>

bool isPrime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}

int sumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    std::vector<int> lst;
    int num, i;
    std::cout << "Enter the number of elements in the list: ";
    std::cin >> num;
    for(i = 0; i < num; i++){
        std::cout << "Enter element " << i+1 << ": ";
        int x; 
        std::cin >> x; 
        lst.push_back(x);
    }
    int maxPrimeNum = 0;
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