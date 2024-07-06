```c++
#include <string>
#include <cctype>

std::string flip_case(std::string str) {
    std::string result = "";
    for (int i = 0; i < str.length(); i++) {
        char c = str[i];
        if (isalpha(c)) {
            if (islower(c))
                result += toupper(c);
            else
                result += tolower(c);
        } 
        else {
            result += c;
        }
    }
    return result;
}