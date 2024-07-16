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
    int input;
    std::cout << "Enter a number: ";
    std::cin >> input;

    for (int i = 1; i <= input; ++i) {
        std::cout << fizzBuzz(i) << std::endl;
    }
    return 0;
}