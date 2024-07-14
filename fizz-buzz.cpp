```cpp
#include <string>
#include <iostream>
#include <sstream>

std::string fizzBuzz(int x) {
    std::ostringstream oss;
    oss << x;
    return x % 15 == 0 ? "FizzBuzz" : (x % 3 == 0 ? "Fizz" : (x % 5 == 0 ? "Buzz" : oss.str()));
}

int main() {
    int x;
    std::cout << "Enter an integer: ";
    std::cin >> x;
    std::cout << fizzBuzz(x) << std::endl;
}