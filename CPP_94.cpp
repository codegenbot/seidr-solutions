#include <vector>
#include <initializer_list>
#include <ostream>
#include <iostream>
#include <cassert>

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int max_prime_sum(std::initializer_list<int> lst){
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

int solve() {
    std::initializer_list<int> lst;
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    for(int i = 0; i < n; i++){
        int num;
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> num;
        lst.push_back(num);
    }
    int result = max_prime_sum(lst);
    std::cout << "The maximum prime number in the list is: " << result << std::endl;
    assert(result == 127); 
    return 0;
}