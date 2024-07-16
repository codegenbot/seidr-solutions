```cpp
#include <string>
#include <iostream>

std::string fizzBuzz(int x) {
    if (x % 5 == 0) { // Buzz
        if (x % 3 == 0) {
            return "FizzBuzz";
        } else {
            return "Buzz";
        }
    } else if (x % 3 == 0) {
        return "Fizz";
    } else {
        return std::to_string(x);
    }
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    std::cout << fizzBuzz(num) << std::endl;
    return 0;
}