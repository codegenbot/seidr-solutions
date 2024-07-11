#include <iostream>
#include <string>

std::string fizzBuzz(int x) {
    std::string result;
    if (x % 3 == 0) {
        result = x % 5 == 0 ? "FizzBuzz" : "Fizz";
    } else if (x % 5 == 0)
        result = "Buzz";
    else
        result = std::to_string(x);
    return result;
}

int main() {
    int x;
    std::cout << "Enter an integer: ";
    std::cin >> x;
    std::cout << fizzBuzz(x) << std::endl;
    return 0;
}