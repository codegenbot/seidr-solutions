#include <string>

int main() {
    int x;
    std::cout << "Enter an integer: ";
    std::cin >> x;
    if (x % 15 == 0)
        std::cout << "FizzBuzz";
    else if (x % 3 == 0)
        std::cout << "Fizz";
    else if (x % 5 == 0)
        std::cout << "Buzz";
    else
        std::cout << x;
    std::cout << std::endl;
    return 0;
}