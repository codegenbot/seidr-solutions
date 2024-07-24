#include <iostream>
#include <limits>

int main() {
    int x;
    while (!(std::cin >> x)) { 
        std::cout << "Invalid input, please try again: ";
        std::cin.clear(); 
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
    }

    std::string result;

    if (x % 3 == 0 && x % 5 == 0) 
        result = "FizzBuzz";
    else if (x % 3 == 0)
        result = "Fizz";
    else if (x % 5 == 0)
        result = "Buzz";
    else
        result = std::to_string(x);

    std::cout << result << std::endl;
    return 0;
}