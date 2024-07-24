#include <string>
#include <iostream>

std::string fizzBuzz(int x) {
    if (x % 3 == 0 && x % 5 == 0)
        return "FizzBuzz";
    else if (x % 3 == 0 || x % 5 == 0) 
        return x % 3 == 0 ? "Fizz" : "Buzz";
    else
        return std::to_string(x);
}

int main() {
    int x;
    std::cout << "Enter an integer: ";
    std::cin >> x;
    std::cout << fizzBuzz(x) << std::endl; 
    return 0;
}