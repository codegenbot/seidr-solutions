#include <cstddef>
#include <string>
#include <vector>

std::vector<std::string> antiShuffle(const std::string& str, char sep) {
    size_t pos = 0;
    std::vector<std::string> tokens;
    
    while ((pos = str.find(sep)) != std::string::npos) {
        tokens.push_back(str.substr(0, pos));
        str = str.substr(pos + 1);
    }
    
    tokens.push_back(str);
    
    return tokens;
}