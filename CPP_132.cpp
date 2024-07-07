#include <iostream>
#include <string>

bool is_nested(std::string str) {
    int count_open = 0, count_close = 0;

    for (char c : str) {
        if (c == '[') {
            count_open++;
            count_close = 0;
        } else if (c == ']') {
            count_close++;
            if (count_open > count_close)
                return true;
            if (count_close > count_open)
                return false;
        }
    }

    return false;
}

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    bool result = is_nested(str);
    std::cout << "The input string is " << (result ? "nested" : "not nested") << ".\n";
    return 0;
}