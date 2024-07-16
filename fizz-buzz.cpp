```cpp
#include <string>
#include <iostream>

std::string fizzBuzz(int x) {
    std::string output = x < INT_MAX ? std::to_string(x) : "Overflow";
    return (x % 15 == 0) ? "FizzBuzz" : (x % 5 == 0) ? "Buzz" : (x % 3 == 0) ? "Fizz" : output;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    std::cout << fizzBuzz(num) << std::endl;
    return 0;
}