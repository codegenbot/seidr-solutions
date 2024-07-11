```cpp
#include <iostream>
#include <string>

std::string fizzBuzz(int x) {
    std::string result;
    result = x % 15 == 0 ? "FizzBuzz" : "";
    if (x % 3 != 0) {
        result = x % 5 != 0 ? std::to_string(x) : "Buzz";
    } else {
        if (x % 5 == 0)
            result = "FizzBuzz";
        else
            result = "Fizz";
    }
    return result;
}

int main() {
    int x;
    std::cout << "Enter an integer: ";
    std::cin >> x;
    std::cout << fizzBuzz(x) << std::endl;
    return 0;
}