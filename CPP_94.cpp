#include <vector>
#include <cmath>
#include <initializer_list>
#include <iostream>

int find_max_prime_and_sum_digits(std::vector<int> lst){
    int maxPrime = 0;
    for(int i : lst){
        if(isPrime(i) && i > maxPrime)
            maxPrime = i;
    }
    int sum = 0;
    while(maxPrime > 0){
        sum += maxPrime % 10;
        maxPrime /= 10;
    }
    return sum;
}

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    std::vector<int> lst = {1, 2, 3, 4, 5};
    std::cout << find_max_prime_and_sum_digits(lst);
    return 0;
}