#include <iostream>

bool is_prime(int num);

int cpp_main() {
    int num;
    std::cout << "Enter a prime number: ";
    std::cin >> num;

    if(is_prime(num)) {
        for(int i = 2; i <= num; i++) {
            if(is_prime(i))
                std::cout << i << " is a prime number." << std::endl;
        }
    } else {
        std::cout << num << " is not a prime number." << std::endl;
    }

    return 0;
}

bool is_prime(int num) {
    if(num <= 1)
        return false;

    for(int i = 2; i*i <= num; i++) {
        if(num % i == 0)
            return false;
    }
    return true;
}