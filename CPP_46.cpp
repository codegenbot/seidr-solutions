```
#include <iostream>
#include <string>

int main() {
    std::cout << "Enter a number: ";
    int n;
    std::cin >> n;
    std::string str = "The " + std::to_string(n) + "-th Fibonacci number is: " + std::to_string(fib4(n)) + "\n";
    return 0;
}
```