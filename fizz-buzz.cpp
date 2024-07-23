#include <iostream>
#include <string>

std::string fizzBuzz(int x) {
    std::string result;
    if (x % 15 == 0)
        return "FizzBuzz";
    else if (x % 3 == 0)
        return "Fizz";
    else if (x % 5 == 0)
        return "Buzz";
    else
        return std::to_string(x);
}

int main() {
    for(int i = 1; i <= 100; ++i) {
        std::cout << fizzBuzz(i) << "\n";
    }
    return 0;
}