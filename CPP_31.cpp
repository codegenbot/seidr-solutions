#include <cassert>
#include <cmath>
#include <iostream>

bool is_prime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return false;
    }
    return true;

}

std::cout << "Enter a number: ";
std::cin >> num;
    
if(is_prime(num)) {
    std::cout << num << " is a prime number." << std::endl;
} else {
    std::cout << num << " is not a prime number." << std::endl;
}