#include <iostream>
#include <string>

std::string fizzBuzz(int x) {
    if (x % 3 == 0) {
        if (x % 5 == 0)
            return "FizzBuzz";
        else
            return "Fizz";
    } else if (x % 5 == 0)
        return "Buzz";
    else
        return std::to_string(x);
}

int main() {
    for(int i = 1; i <= 100; ++i) {
        std::cout << fizzBuzz(i) << std::endl;
    }
    return 0;
}