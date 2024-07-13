```cpp
#include <string>

int main() {
    int x;
    std::cout << "Enter an integer: ";
    std::cin >> x;
    std::cout << fizzBuzz(x) << std::endl;
    return 0;
}

std::string fizzBuzz(int x) {
    std::string output;
    if (x % 3 == 0 && x % 5 == 0)
        output = "FizzBuzz";
    else if (x % 3 == 0)
        output = "Fizz";
    else if (x % 5 == 0)
        output = "Buzz";
    else
        output = std::to_string(x);
    return output;
}