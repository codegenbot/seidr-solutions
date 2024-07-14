#include <iostream>
#include <string>

int main() {
    std::cout << "Enter an integer: ";
    int x;
    std::cin >> x;

    for(int i=1; i<=x; i++) {
        std::string output;
        if(i % 3 == 0) output += "Fizz";
        if(i % 5 == 0) output += "Buzz";
        if(output.empty()) output = std::to_string(i);

        std::cout << output << std::endl;
    }

    return 0;
}