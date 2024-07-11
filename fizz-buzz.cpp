```
#include <string>

std::string fizzBuzz(int x) {
    if (x % 15 == 0)
        return "FizzBuzz";
    if (x % 3 == 0)
        return x % 5 == 0 ? "FizzBuzz" : "Fizz";
    return x % 5 == 0 ? "Buzz" : std::to_string(x);
}