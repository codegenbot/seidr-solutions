#include <vector>
#include <iostream>
#include <cassert>
#include <initializer_list>

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int max_prime_sum(std::vector<int> lst){
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

int solve(int n, std::vector<int> lst){
    int total = 0;
    for(int i : lst){
        total += i;
    }
    if(total == 0) return 0;
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

int main() {
    std::cout << "Enter the number of elements: ";
    int n;
    std::cin >> n;
    std::vector<int> lst;
    for(int i = 0; i < n; i++){
        int num;
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> num;
        lst.push_back(num);
    }
    int result = solve(n, lst);
    std::cout << "The maximum prime number in the list is: " << result << std::endl;
    return 0;
}