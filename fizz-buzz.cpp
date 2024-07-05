```c++
#include <string>
#include <iostream>

std::string fizzBuzz(int x) {
    if (x % 15 == 0) 
        return "FizzBuzz";
    else if (x % 5 == 0)
        return x % 3 == 0 ? "Fizz" : "Buzz";
    else
        return std::to_string(x);
}

int main() {
    int x = 15; // test input
    std::cout << fizzBuzz(x) << std::endl;
    return 0;
}