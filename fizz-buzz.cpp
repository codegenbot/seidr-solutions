#include <string>
#include <sstream>

std::string intToString(int x) {
    std::stringstream ss;
    ss << x;
    return ss.str();
}

std::string fizzBuzz(int x) {
    if (x % 3 == 0 && x % 5 == 0)
        return "FizzBuzz";
    else if (x % 3 == 0)
        return "Fizz"; 
    else if (x % 5 == 0)
        return "Buzz"; 
    else
        return intToString(x);
}

int main() {
    int x;
    std::cout << "Enter a number: ";
    std::cin >> x;
    std::cout << fizzBuzz(x) << std::endl;
    return 0;
}