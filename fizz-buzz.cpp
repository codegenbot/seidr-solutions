#include <iostream>
#include <string>

int main() {
    std::string str;
    std::cout << "Enter an integer: ";
    std::cin >> std::ws; 
    std::getline(std::cin, str); 
    int x = stoi(str);
    std::cout << (x % 3 == 0 && x % 5 == 0 ? "FizzBuzz" : x % 3 == 0 ? "Fizz" : x % 5 == 0 ? "Buzz" : std::to_string(x)) << std::endl;
}