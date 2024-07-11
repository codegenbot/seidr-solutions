#include <string>
#include <iostream>

std::string fizzBuzz(int x) {
    if (x % 15 == 0)
        return "FizzBuzz";
    else
        return x % 3 == 0 ? "Fizz" : (x % 5 == 0 ? "Buzz" : std::to_string(x));
}

int main() {
    int x;
    std::cout << "Enter a number: ";
    std::cin >> x;
    std::cout << fizzBuzz(x) << std::endl;
    return 0;
}