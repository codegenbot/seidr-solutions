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
    std::string result;
    while (std::cin >> result) {  // use a loop until you reach the end of the file
        std::cout << "Flipped case: " << flip_case(result) << std::endl;

        return 0;
}