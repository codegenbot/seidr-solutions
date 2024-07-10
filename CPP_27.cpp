```cpp
#include <iostream>
#include <sstream>

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
    char c;
    std::string input_string;

    while ((c = std::cin.get()) != '\n') {
        if (isalpha(c)) {
            if (isupper(c))
                input_string += tolower((char)c);  
            else
                input_string += toupper((char)c);
        } else
            input_string += c;
    }
    
    std::cout << "Flipped case: " << flip_case(input_string) << std::endl;

    return 0;
}