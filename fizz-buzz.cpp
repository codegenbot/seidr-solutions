#include <iostream>
#include <string>

std::string fizzBuzz(int x) {
    std::string result = "";
    result = (x % 5 == 0 && x % 3 == 0) ? "FizzBuzz" : 
             (x % 5 == 0) ? "Buzz" : 
             (x % 3 == 0) ? "Fizz" : 
             std::to_string(x);
    return result;
}

int main() {
    int input;
    std::cout << "Enter a number: ";
    std::cin >> input;
    std::cout << fizzBuzz(input) << std::endl;
    return 0;
}