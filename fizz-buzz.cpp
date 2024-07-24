#include <string>
#include <sstream>

int main() {
    int x;
    std::cout << "Enter an integer: ";
    std::cin >> x;

    std::string result = "";
    
    if (x % 3 == 0 && x % 5 == 0)
        result = "FizzBuzz";
    else if (x % 3 == 0)
        result = "Fizz";
    else if (x % 5 == 0)
        result = "Buzz";
    else
        std::to_string(x);

    return 0;
}