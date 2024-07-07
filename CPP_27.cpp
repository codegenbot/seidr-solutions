#include <string>
#include <cctype>

std::string flip_case(std::string str) {
    std::string result = str; 
    for (char & c : result) { 
        c = std::toupper(c); 
        if (std::islower(c)) {
            c = std::tolower(c); 
        }
    }
    return result;
}