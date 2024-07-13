#include <iostream>
#include <string>

int main() {
    int x;
    std::cout << "Enter an integer: ";
    std::cin >> x;
    std::cout << (x % 3 == 0 && x % 5 == 0 ? "FizzBuzz" : x % 3 == 0 ? "Fizz" : x % 5 == 0 ? "Buzz" : std::to_string(x)) << std::endl;
}