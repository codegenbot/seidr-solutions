#include <string>
#include <iostream>

int main() {
    int x; // read input from user
    std::cin >> x;
    std::cout << fizzBuzz(x) << std::endl;
    return 0;
}

std::string fizzBuzz(int x) {
    if (x % 15 == 0)
        return "FizzBuzz";
    else if (x % 5 == 0)
        return x % 3 ? "Buzz" : "FizzBuzz";
    else if (x % 3 == 0)
        return "Fizz";
    else
        return std::to_string(x);
}