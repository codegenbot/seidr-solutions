#include <cctype>
#include <string>
#include <iostream>

std::string filp_case(const std::string& str) {
    std::string result = str;
    for (char &c : result) {
        c = std::islower(c) ? std::toupper(c) : std::tolower(c);
    }
    return result;

}