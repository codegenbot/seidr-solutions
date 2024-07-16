#include <iostream>
#include <string>

std::string fizzBuzz(int x) {
    std::string result = "";
    result = (x % 3 == 0 && x % 5 == 0) ? "FizzBuzz" : 
             (x % 3 == 0) ? "Fizz" : 
             (x % 5 == 0) ? "Buzz" : 
             std::to_string(x);
    return result;
}

int main() {
    int x;
    for (;;) {
        std::cout << "Enter a number: ";
        std::cin >> x;
        std::cout << fizzBuzz(x) << std::endl;
        if (x == 0)
            break; 
    }
    return 0;
}