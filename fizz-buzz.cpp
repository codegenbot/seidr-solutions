#include <string>

int fizzBuzz(int x) {
    if (x % 3 == 0 && x % 5 == 0)
        return std::stoi("FizzBuzz");
    else if (x % 3 == 0)
        return std::stoi("Fizz");
    else if (x % 5 == 0)
        return std::stoi("Buzz");
    else
        return std::stoi(std::to_string(x));
}