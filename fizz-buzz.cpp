#include <iostream>
#include <string>
#include <sstream>

std::string fizzBuzz(int x) {
    std::stringstream ss;
    if (x % 3 == 0 && x % 5 == 0)
        ss << "FizzBuzz";
    else if (x % 3 == 0)
        ss << "Fizz";
    else if (x % 5 == 0)
        ss << "Buzz";
    else
        ss << x;
    return ss.str();
}

int main() {
    int x;
    std::cout << "Enter a number: ";
    std::cin >> x;
    std::cout << fizzBuzz(x) << std::endl;
    return 0;
}