```cpp
#include <vector>
#include <cmath>
#include <iostream>
#include <initializer_list>

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int find_max_prime_and_sum_digits(std::vector<int> lst){
    int maxPrime = 0;
    for(int i = 0; i < lst.size(); i++){
        if(isPrime(lst[i]) && lst[i] > maxPrime)
            maxPrime = lst[i];
    }
    int sum = 0;
    while(maxPrime > 0){
        sum += maxPrime % 10;
        maxPrime /= 10;
    }
    return sum;
}

int main() {
    std::vector<int> lst;
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    for(int i = 0; i < n; i++){
        int num;
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> num;
        lst.push_back(num);
    }
    int maxPrimeAndSum = find_max_prime_and_sum_digits(lst);
    if(maxPrimeAndSum == 10) {
        std::cout << "The sum of digits is equal to 10." << std::endl;
    } else {
        std::cout << "Maximum prime and sum of digits: " << maxPrimeAndSum << std::endl;
    }
}