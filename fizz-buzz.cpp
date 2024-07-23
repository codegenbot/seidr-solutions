#include <iostream>
#include <string>

std::string fizzBuzz(int x) {
    if (x % 5 == 0) {
        if (x % 3 == 0) return "FizzBuzz";
        return "Buzz";
    } else if (x % 3 == 0) {
        return "Fizz";
    }
}

int main() {
    for(int i = 1; i <= 100; ++i) {
        std::cout << fizzBuzz(i) << "\n";
    }
    return 0;
}