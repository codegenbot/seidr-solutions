#include <string>
#include <iostream>

int main() {
    int x; 
    std::cin >> x;
    if (x % 15 == 0)
        std::cout << "FizzBuzz";
    else if (x % 3 == 0)
        std::cout << (x % 5 == 0 ? "Fizz" : "Fizz");
    else
        std::cout << (x % 5 == 0 ? "Buzz" : std::to_string(x));
    std::cout << std::endl;
    return 0;