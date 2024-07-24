#include <iostream>
#include <string>

std::string fizzBuzz(int x) {
    std::string result;
    if (x % 15 == 0)
        result = "FizzBuzz";
    else if (x % 3 == 0)
        result = x % 5 == 0 ? "FizzBuzz" : "Fizz";
    else
        result = x % 5 == 0 ? "Buzz" : std::to_string(x);
    return result;
}

int main() {
    for(int i = 1; i <= 100; ++i) {
        std::cout << fizzBuzz(i) << std::endl;
    }
    return 0;
}