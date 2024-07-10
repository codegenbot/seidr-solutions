```c++
#include <string>
#include <iostream>

int main() {
    int x; 
    std::cin >> x;
    if (x % 15 == 0)
        std::cout << "FizzBuzz";
    else if (x % 5 == 0)
        (x % 3) ? std::cout << "Buzz" : std::cout << "FizzBuzz";
    else
        std::cout << x;
    std::cout << std::endl;
    return 0;
}