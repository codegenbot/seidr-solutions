```cpp
#include <iostream>
#include <string>

std::string fizzBuzz(int x) {
    std::string str;
    if (x % 15 == 0)
        return "FizzBuzz";
    else if (x % 3 == 0) {
        str = (x % 5 == 0) ? "FizzBuzz" : "Fizz";
        return str;
    } else {
        str = (x % 5 == 0) ? "Buzz" : std::to_string(x);
        return str;
    }
}

int main() {
    int x;
    std::cout << "Enter a number: ";
    std::cin >> x;
    std::cout << fizzBuzz(x) << std::endl;
    return 0;
}