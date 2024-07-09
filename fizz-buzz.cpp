#include <iostream>
#include <string>

std::string fizzBuzz(int x) {
    std::string output;
    if (x % 3 == 0 && x % 5 == 0) 
        return "FizzBuzz";
    else if (x % 3 == 0) 
        return "Fizz";
    else if (x % 5 == 0) 
        return "Buzz";
    else 
        output = std::to_string(x);
    return output;
}

int main() {
    int x; 
    std::cout << "Enter an integer: ";
    std::cin >> x;
    std::cout << fizzBuzz(x) << std::endl;
}