#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> split(const std::string& str, char delimiter) {
    std::vector<std::string> segments;
    std::string tempStr = "";
    
    for (char c : str) {
        if(c != ' ') {
            tempStr += c;
        } else if(!tempStr.empty()) {
            segments.push_back(tempStr);
            tempStr = "";
        }
    }

    if (!tempStr.empty()) {
        segments.push_back(tempStr);
    }

    return segments;
}

std::string camelCase(const std::string& str) {
    std::string result;

    for (const auto& segment : split(str, '-')) {
        if (!result.empty()) {
            result += toupper(segment[0]);
        } else {
            result += tolower(segment[0]);
        }
        if (!result.empty() || segment.size() > 1) {
            result += segment.substr(1);
        }
    }

    return result;
}

int main() {
    std::string str;
    while(std::getline(std::cin, str)) { 
        std::cout << "Camel case: " << camelCase(str) << std::endl;
    }
    
    return 0;
}