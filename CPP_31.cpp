#include <iostream>

bool is_prime(int n) {
    if(n <= 1)
        return false;
    for(int i = 2; i*i <= n; i++) {
        if(n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int num;
    std::cout << "Enter a prime number: ";
    std::cin >> num;

    if (is_prime(num)) {
        for (int i = 2; i <= num; i++) {
            if (is_prime(i))
                std::cout << i << " is a prime number." << std::endl;
        }
    } else {
        std::cout << num << " is not a prime number." << std::endl;
    }

    return 0;
}