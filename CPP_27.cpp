```cpp
#include <string>
#include <cctype>

std::string flip_case(std::string& s) {
    std::string result = s; 
    for (char &c : result) { 
        if (isupper(c)) {
            c = tolower(c);
        } else if (islower(c)) {
            c = toupper(c);
        }
    }
    return result; 
}