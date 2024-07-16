#include <iostream>
int main() {
    int x;
    std::cin >> x;
    if (x % 3 == 0 && x % 5 == 0) {
        std::cout << "FizzBuzz";
    } else if (x % 3 == 0) {
        std::cout << "Fizz";
    } else if (x % 5 == 0) {
        std::cout << "Buzz";
    } else {
        std::cout << x;
    }
    return 0;
}