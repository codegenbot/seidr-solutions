#include <iostream>
#include <string>

int main() {
    int x;
    std::cout << "Enter an integer: ";
    std::cin >> x;

    std::string result = std::string(""); // Fix: Initialize the `result` variable with an empty string using the constructor
    
    if (x % 15 == 0) 
        result = "FizzBuzz";
    else if (x % 3 == 0) {
        if (x % 5 == 0)
            result = "FizzBuzz";
        else
            result = "Fizz";
    } else if (x % 5 == 0)
        result = "Buzz";
    else
        result = std::to_string(x);

    std::cout << result << std::endl;
    return 0;
}