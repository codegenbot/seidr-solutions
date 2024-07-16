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

int solve() {
    std::vector<int> lst({127, 97, 8192});
    int result = max_prime_sum(lst);
    std::cout << "The maximum prime number in the list is: " << result << std::endl;
    assert(result == 127); 
    return 0;
}