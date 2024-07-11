```cpp
#include <iostream>
#include <string>

std::string fizzBuzz(int x) {
    std::string str = (x % 5 == 0) ? (x % 3 == 0) ? "FizzBuzz" : (x % 3 == 0) ? "Fizz" : "Buzz" : std::to_string(x);
    return str;
}

int main() {
    int x;
    std::cout << "Enter a number: ";
    std::cin >> x;
    std::cout << fizzBuzz(x) << std::endl;
    return 0;
}