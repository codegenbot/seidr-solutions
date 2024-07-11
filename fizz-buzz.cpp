#include <sstream>
std::stringstream zz;
std::string buzz(int x) {
    if(x % 15 == 0)
        return "FizzBuzz";
    else if(x % 3 == 0)
        return (x % 5 == 0) ? "FizzBuzz" : "Fizz";
    else if(x % 5 == 0)
        return "Buzz";
    else
        zz << x;
    return zz.str();
}