```cpp
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

int max_prime_sum(const std::vector<int>& lst){
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

int solve(const std::vector<int>& lst){
    int n = 0;
    for(int i = 0; i < lst.size(); i++){
        n += lst[i];
    }
    if(n == 0) return 0;
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
    std::cout << "Enter the number of elements: ";
    int n;
    std::cin >> n;
    std::vector<int> lst(n);
    for(int i = 0; i < n; i++){
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> lst[i];
    }
    int result = solve(lst);
    std::cout << "The maximum prime number in the list is: " << result << std::endl;
    assert(result == 10);
    return 0;
}