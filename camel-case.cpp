Here is the solution in C++:

#include <iostream>
#include <string>

std::string camelCase(std::string s) {
    std::vector<std::string> parts = split(s, "-");
    std::string result;
    
    for (const auto& part : parts) {
        if (!result.empty()) {
            result[0] = toupper(result[0]);
        }
        result += part + " ";
    }
    
    return result.substr(0, result.size() - 1);
}

std::vector<std::string> split(const std::string& s, char c) {
    std::vector<std::string> parts;
    std::stringstream ss(s);
    std::string part;

    while (std::getline(ss, part, c)) {
        parts.push_back(part);
    }

    return parts;
}

int main() {
    std::cout << camelCase("nospaceordash") << "\n";
    std::cout << camelCase("two-words") << "\n";
    std::cout << camelCase("two words") << "\n";
    std::cout << camelCase("all separate words") << "\n";
    return 0;
}