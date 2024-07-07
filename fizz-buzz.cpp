#include <string>
#include <sstream>

string fizzBuzz(int x) {
    ostringstream oss;
    if (x % 3 == 0 && x % 5 == 0)
        oss << "FizzBuzz";
    else if (x % 3 == 0)
        oss << "Fizz";
    else if (x % 5 == 0)
        oss << "Buzz";
    else
        oss << to_string(x);
    return oss.str();