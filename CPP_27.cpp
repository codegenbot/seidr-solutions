```cpp
#include <string>
#include <cctype>
#include <iostream>

std::string flip_case(const std::string& str) {
    std::string result;
    for (char c : str) {  
        if (isalpha(c)) {
            if (isupper(c))
                result += tolower((char)c);  
            else
                result += toupper((char)c);
        } else
            result += c;
    }
    return result;
}

int main() {
    std::string input;
    char c;
    while ((c = std::cin.get()) != '\n') {
        input += c;
    }

    std::cout << "Flipped case: " << flip_case(input) << std::endl;

    return 0;
}