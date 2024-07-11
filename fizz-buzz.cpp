#include <sstream>

std::stringstream output;
if (x % 15 == 0) {
    output << "FizzBuzz";
} else if (x % 3 == 0) {
    output << (x % 5 == 0) ? "FizzBuzz" : "Fizz";
} else if (x % 5 == 0) {
    output << "Buzz";
} else {
    output << x;
}
return output.str();