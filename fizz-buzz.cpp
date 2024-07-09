#include <iostream>
#include <string>

std::string fizzBuzz(int x) {
    if (x % 3 == 0 && x % 5 == 0) {
        return "FizzBuzz";
    } else if (x % 3 == 0) {
        return "Fizz";
    } else if (x % 5 == 0) {
        return "Buzz";
    }
    return std::to_string(x);
}

int main() {
    int x; 
    std::cout << "Enter an integer: ";
    std::cin >> x;
    std::string output = fizzBuzz(x);
    std::cout << output;
}