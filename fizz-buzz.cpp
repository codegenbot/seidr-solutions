#include <string>

string fizzBuzz(int x) {
    if (x % 15 == 0)
        return "FizzBuzz";
    else if (x % 3 == 0)
        return x % 5 == 0 ? "FizzBuzz" : "Fizz";
    else
        return x % 5 == 0 ? "Buzz" : to_string(x);