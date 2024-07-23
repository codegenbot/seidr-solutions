```cpp
#include <string>
std::string fizzBuzz(int x) {
    std::string result;
    if (x % 15 == 0) { 
        result = "FizzBuzz";
    } else if (x % 3 == 0) { 
        if (x % 5 == 0) {
            result = "FizzBuzz";
        } else {
            result = "Fizz";
        }
    } else if (x % 5 == 0) { 
        result = "Buzz";
    } else {
        std::string str = std::to_string(x);
        result = str;
    }
    return result;