```c++
#include <string>
#include <iostream>
#include <sstream>

std::string fizzBuzz(int x) {
    std::ostringstream result;
    result << (x % 3 == 0 && x % 5 == 0) ? "FizzBuzz" : 
           (x % 3 == 0) ? "Fizz" : 
           (x % 5 == 0) ? "Buzz" : 
           std::to_string(x);
    return result.str();
}

int main() {
    int x;
    std::cin >> x;
    std::cout << fizzBuzz(x) << std::endl;
}