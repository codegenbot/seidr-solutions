```cpp
#include <string>
#include <iostream>

std::string fizzBuzz(int x) {
    std::string result = "";

    if (x % 15 == 0) {
        result = "FizzBuzz";
    } else if (x % 5 == 0) {
        if (result.empty()) {
            result = "Buzz";
        }
    } else if (x % 3 == 0) {
        if (result.empty()) {
            result = "Fizz";
        }
    }

    if (result.empty()) {
        return std::to_string(x);
    }

    return result;
}

int main() {
    int x = 15; // test value
    std::cout << fizzBuzz(x) << std::endl;
    return 0;
}