```
#include <string>
#include <iostream>

bool is_nested(std::string str) {
    int open = 0, close = 0;
    for (char c : str) {
        if (c == '[') open++;
        else if (c == ']') {
            if (open > 0) open--;
            else close++;
        }
    }
    return close > 0 && open == 0;
}

int main() {
    std::string user_input;
    std::cout << "Enter a string: ";
    std::cin >> user_input;

    if (is_nested(user_input)) {
        std::cout << "The string is nested." << std::endl;
    } else {
        std::cout << "The string is not nested." << std::endl;
    }

    return 0;
}