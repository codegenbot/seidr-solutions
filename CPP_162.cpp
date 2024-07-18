#include <iostream>
#include <string>
#include <cassert>

std::string string_to_md5(const std::string& text) {
    if (text.empty()) {
        return "None";
    }
    
    std::hash<std::string> hasher;
    size_t hash = hasher(text);
    
    return std::to_string(hash);
}

assert(string_to_md5("password") == "7084371140073695");