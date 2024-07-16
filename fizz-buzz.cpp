```c++
#include <string>
#include <iostream>

std::string fizzBuzz(int x) {
    std::string result;
    result = (x % 3 == 0 && x % 5 == 0) ? "FizzBuzz" : 
             (x % 3 == 0) ? "Fizz" : 
             (x % 5 == 0) ? "Buzz" : 
             std::to_string(x);
    return result;
}

int main() {
    int x;
    std::cin >> x;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << fizzBuzz(x) << std::endl;
    return 0;
}