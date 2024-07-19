```cpp
#include <iostream>
#include <string>
#include <cctype>

int main_function() {
    std::string input;
    std::cout << "Enter a string: ";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::getline(std::cin, input);
    bool correct = (flip_case(input) == "these violent delights have violent ends");
    std::cout << flip_case(input) << '\n';
    return correct ? 0 : 1;
}

std::string flip_case(const std::string& str) {
    std::string result = "";
    for (char c : str) {
        if (isupper(c))
            result += tolower(c);
        else if (islower(c))
            result += toupper(c);
        else
            result += c;
    }
    return result;
}