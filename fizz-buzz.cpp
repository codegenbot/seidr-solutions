#include <iostream>
#include <string>

std::string fizzBuzz(int x) {
    std::string result;
    if (x % 15 == 0)
        return "FizzBuzz";
    else if (x % 3 == 0)
        result = "Fizz";
    else if (x % 5 == 0)
        result = "Buzz";
    else
        return ""; // Fix it by adding this line to return an empty string for other cases