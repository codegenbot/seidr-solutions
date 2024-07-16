```cpp
#include <iostream>
#include <string>

std::string fizzBuzz(int x) {
    std::string result = (x % 3 == 0 && x % 5 == 0) ? "FizzBuzz" : 
                         (x % 3 == 0) ? "Fizz" : 
                         (x % 5 == 0) ? "Buzz" : 
                         std::to_string(x);
    return result;
}

int main() {
    int x;
    std::cout << "Enter a number: ";
    std::cin >> x;
    std::cout << fizzBuzz(x) << std::endl;
    return 0;
}