#include <string>
#include <cctype>

std::string myString(std::string str) {
    std::string result;
    for (char c : str) {
        if (isupper(c)) {
            result += tolower(c);
        } else if (islower(c)) {
            result += toupper(c);
        } else {
            result += c;
        }
    }
    return result;  
}

int main() {
    std::cout << myString("Hello World") << std::endl;
    return 0;
}