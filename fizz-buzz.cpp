```cpp
#include <iostream>
#include <string>

std::string fizzBuzz(int x) {
    if (x % 15 == 0) {
        return "FizzBuzz";
    } else if (x % 3 == 0) {
        return "Fizz";
    } else if (x % 5 == 0) {
        return "Buzz";
    } else {
        std::string str = std::to_string(x); 
        return str;
    }
}

int main() {
    int x; 
    std::cout << "Enter an integer: ";
    std::cin >> x;
    std::cout << fizzBuzz(x) << std::endl;
}