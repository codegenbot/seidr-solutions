#include <string>

std::string fizzBuzz(int x) {
    std::stringstream result;
    if (x % 15 == 0) {
        result << "FizzBuzz";
    } else if (x % 3 == 0) {
        result << "Fizz";
    } else if (x % 5 == 0) {
        result << "Buzz";
    } else {
        std::string s = std::to_string(x);
        result << s;
    }
    return result.str();
}