#include <string>
#include <iostream>

int main() {
    int x; 
    std::cin >> x;
    if (x % 15 == 0)
        std::cout << "FizzBuzz";
    else if (x % 3 == 0)
        (x % 5) ? std::cout << "Fizz" : std::cout << "FizzBuzz";
    else
        (x % 5) ? std::cout << "Buzz" : std::cout << x;
    std::cout << std::endl;
    return 0;
}