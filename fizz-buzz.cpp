```c++
#include <string>
#include <iostream>

std::string fizzBuzz(int x) {
    std::string result;
    if (x % 3 == 0 && x % 5 == 0)
        result = "FizzBuzz";
    else if (x % 3 == 0)
        result = "Fizz";
    else if (x % 5 == 0)
        result = "Buzz";
    else
        result = std::to_string(x);
    return result;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    std::cout << fizzBuzz(num) << std::endl;
    return 0;
}