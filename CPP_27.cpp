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
    std::string result = "";
    char c;
    while ((c = std::cin.get()) != '\n') {
        if (isalpha(c)) {
            if (isupper(c))
                result += tolower((char)c);  
            else
                result += toupper((char)c);
        } else
            result += c;
    }
    
    std::cout << "Flipped case: " << flip_case(result) << std::endl;

    return 0;
}