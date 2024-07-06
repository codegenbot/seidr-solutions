#include <iostream>
#include <string>

bool is_nested(std::string str) {
    int open = 0, close = 0;
    for (char c : str) {
        if (c == '[') open++;
        else if (c == ']') close++;
    }
    return open > 0 && close >= open; 
}

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::cin >> str;
    bool result = is_nested(str);
    if(result)
        std::cout << "The string is nested";
    else
        std::cout << "The string is not nested";
    return 0;
}