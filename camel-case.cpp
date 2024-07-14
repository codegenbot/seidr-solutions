```cpp
#include <iostream>
#include <string>

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
    std::vector<std::string> segments = split(str, '-');
    std::string result;

    for (const auto& segment : segments) {
        if (!result.empty()) {
            result += toupper(segment[0]);
        } else {
            result += tolower(segment[0]);
        }
        if (segment.size() > 1) {
            result += segment.substr(1);
        }
    }

    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string in kebab-case: ";
    char c;
    while((c = cin.get()) != '\n') {
        input += c;
    }
    
    std::cout << "camelCase: " << camelCase(input) << std::endl;

    return 0;
}