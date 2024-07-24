#include <iostream>
#include <string>

int main() {
    int x;
    std::cout << "Enter an integer: ";
    std::cin >> x;

    result = (x % 3 == 0) ? (x % 5 == 0 ? "FizzBuzz" : "Fizz") : (x % 5 == 0 ? "Buzz" : std::to_string(x));

    std::cout << result << std::endl;
    return 0;
}