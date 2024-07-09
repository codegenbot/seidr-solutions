```cpp
#include <vector>
#include <cmath>
#include <iostream>

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int find_max_prime_and_sum_digits(int n, int num){
    int maxPrime = 0;
    for(int i = 0; i < n; i++){
        if(isPrime(num) && num > maxPrime)
            maxPrime = num;
        num++;
    }
    int sum = 0;
    while(maxPrime > 0){
        sum += maxPrime % 10;
        maxPrime /= 10;
    }
    return sum;
}

int main() {
    int n, num, maxPrimeAndSum;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    for(int i = 0; i < n; i++){
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> num;
        if(i == n-1) {
            maxPrimeAndSum = find_max_prime_and_sum_digits(n, num);
            std::cout << "The sum of digits is equal to " << maxPrimeAndSum << "." << std::endl;
        } else {
            int temp = find_max_prime_and_sum_digits(n, num);
            std::cout << "Maximum prime and sum of digits: " << temp << std::endl;
            maxPrimeAndSum = temp;
        }
    }
}