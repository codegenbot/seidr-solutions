#include <iostream>
#include <string>

std::string fizzBuzz(int x) {
    std::string result;
    if (x % 15 == 0)
        return "FizzBuzz";
    else if (x % 3 == 0)
        result = "Fizz";
    else if (x % 5 == 0)
        result = "Buzz";
    else
        return ""; 
    return result;
}

int main() {
    int x;
    std::cout << "Enter an integer: ";
    std::cin >> x;
    std::cout << fizzBuzz(x) << std::endl;
    return 0;
}