```cpp
#include <iostream>
#include <string>

int main() {
    int x;
    std::cout << "Enter an integer: ";
    while (std::cin.get() != '\n') { std::cin.ignore(); }
    std::cin >> x;
    std::cout << (x % 15 == 0 ? "FizzBuzz" : x % 3 == 0 ? "Fizz" : x % 5 == 0 ? "Buzz" : std::to_string(x)) << std::endl;
}