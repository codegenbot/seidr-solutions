```cpp
#include <iostream>
#include <string>

std::string flip_case(const std::string& str) {
    std::string result;
    for (char c : str) {
        if (isalpha(c)) {
            if (islower(c))
                result += toupper(c);
            else
                result += tolower(c);
        } else
            result += c;
    }
    return result;
}

int main() {
    std::string result;
    while (std::cin >> result) {  
        std::cout << "Flipped case: " << flip_case(result) << std::endl;
    }
}