#include <iostream>

int main() {
    int x;
    std::cin >> x;
    if (x % 3 == 0 && x % 5 == 0) {
        std::cout << "FizzBuzz" << std::endl;
    } else if (x % 3 == 0) {
        std::cout << "Fizz" << std::endl;
    } else if (x % 5 == 0) {
        std::cout << "Buzz" << std::endl;
    } else {
        std::cout << x << std::endl;
    }
    return 0;
}