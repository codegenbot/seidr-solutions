```cpp
#include <iostream>
#include <string>

bool prime_length(std::string str){
    int len = str.length();
    bool isPrime = true;

    if(len <= 1)
        return false;

    for(int i = 2; i*i <= len; i++){
        if(len % i == 0){
            isPrime = false;
            break;
        }
    }

    return isPrime;
}

int main() {
    std::string str;
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    // Check if the entered number is prime
    if(prime_length(std::to_string(num))){
        std::cout << num << " is a prime number." << std::endl;
    } else {
        std::cout << num << " is not a prime number." << std::endl;
    }

    return 0;
}