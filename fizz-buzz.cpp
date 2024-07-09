#include <iostream>
#include <iomanip>

std::string fizzBuzz(int x) {
    std::string result;
    if (x % 15 == 0)
        result = "FizzBuzz";
    else if (x % 3 == 0)
        result = (x % 5 == 0) ? "FizzBuzz" : "Fizz";
    else if (x % 5 == 0)
        result = "Buzz";
    else
        result = std::to_string(x); // use fixed precision for large numbers

    return result;
}

int main() {
    for(int i = 1; i <= 30; i++) {
        std::cout << std::setprecision(std::numeric_limits<int>::max_digits10) << fizzBuzz(i) << std::endl;
    }
}