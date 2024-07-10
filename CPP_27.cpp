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
    std::stringstream ss("");
    char c;
    while ((c = std::cin.get()) != '\n') {
        if (isalpha(c)) {
            if (isupper(c))
                ss << tolower((char)c);  
            else
                ss << toupper((char)c);
        } else
            ss << c;
    }
    
    std::cout << "Flipped case: " << ss.str() << std::endl;

    return 0;
}