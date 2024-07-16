#include <string>

int fizzBuzz(int x) {
    if (x % 3 == 0 && x % 5 == 0)
        return std::string("FizzBuzz");
    else if (x % 3 == 0)
        return std::string("Fizz");
    else if (x % 5 == 0)
        return std::string("Buzz");
    else
        return std::to_string(x);