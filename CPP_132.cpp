```cpp
#include <string>

bool is_nested(std::string str) {
    int open = 0, close = 0;
    for (char c : str) {
        if (c == '[') open++;
        else if (c == ']') {
            if (open > 0) open--;
            else close++;
        }
    }
    return close == 0;
}

int main() { 
    std::string input;
    std::cout << "Enter your string: ";
    std::cin >> input;

    if (is_nested(input))
        std::cout << "The string is nested.\n";
    else
        std::cout << "The string is not nested.\n";

    return 0;
}