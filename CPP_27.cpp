```cpp
#include <iostream>
#include <string>
#include <limits>

std::string flip_case(const std::string& str) {
    std::string result = "";
    for (char c : str) {
        if (isupper(c)) {
            result += tolower(c);
        } else if (islower(c)) {
            result += toupper(c);
        } else {
            result += c;
        }
    }
    return result;
}

int main_function() {
    std::string input;
    std::cout << "Enter a string: ";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::getline(std::cin, input);
    std::cout << flip_case(input) << '\n';
    if(flip_case(input).compare("these violent delights have violent ends") == 0)
        return 0;
    else
        return 1;
}