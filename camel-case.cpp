#include <vector>
#include <iostream>
#include <string>

std::string camelCase(const std::string& str) {
    std::string result = "";
    for (const auto& group : str.split(' ')) { 
        if (!result.empty()) {
            result += static_cast<char>(static_cast<int>('a') + group[0] - 97); 
        } else {
            result += group;
        }
        for (char c : group.substr(1)) { 
            if (c != '-') {
                result += ::toupper(c);
            }
        }
    }
    return result;
}

std::string split(const std::string& str, char delimiter) {
    std::vector<std::string> tokens = {};
    size_t prev = 0, pos = 0;
    do {
        pos = str.find(delimiter, prev);
        if (pos == std::string::npos) {
            pos = str.length();
        }
        std::string token = str.substr(prev, pos - prev);
        tokens.push_back(token);
        prev = pos + 1;
    } while (pos != std::string::npos);
    return *new std::string(tokens.begin(), tokens.end());
}

int main() {
    std::string str;
    while (std::cin >> str) {
        std::cout << camelCase(str) << std::endl;
    }
    return 0;
}