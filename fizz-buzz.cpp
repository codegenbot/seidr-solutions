#include <string>
#include <iostream>

int main() {
    int x; 
    std::cin >> x;
    std::cout << ((x % 3 == 0) && (x % 5 == 0)) ? "FizzBuzz" : ((x % 5 == 0) ? "Buzz" : (x % 3 == 0) ? "Fizz" : std::to_string(x));
    std::cout << std::endl;
    return 0;
}