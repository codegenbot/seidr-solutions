```
#include <iostream>
#include <string>

std::string fizzBuzz(long long x) {
    if (x % 15 == 0) return "FizzBuzz";
    else if (x % 3 == 0) return "Fizz";
    else if (x % 5 == 0) return "Buzz";
    else return std::to_string(x);
}

int main() {
    long long x; 
    std::cout << "Enter an integer: ";
    std::cin >> x;
    std::cout << fizzBuzz(x) << std::endl;
}