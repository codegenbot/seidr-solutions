```cpp
#include <iostream>
#include <string>

std::string fizzBuzz(int x) {
    if (x % 3 == 0 && x % 5 == 0)
        return "FizzBuzz";
    else if (x % 3 == 0)
        return "Fizz";
    else if (x % 5 == 0)
        return "Buzz";
    else
        return std::to_string(x);
}

int main() {
    int x;
    std::cout << (x % 3 == 0 && x % 5 == 0 ? "FizzBuzz" : 
                 (x % 3 == 0 ? "Fizz" : 
                  (x % 5 == 0 ? "Buzz" : std::to_string(x)))) << std::endl;
    return 0;
}