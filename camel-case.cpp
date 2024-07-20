```cpp
#include <iostream>
#include <string>

std::string toCamelCase(const std::string& s) {
    std::string result;
    bool first = true;

    for (const auto& word : split(s, " -")) {
        if (first) {
            result += word;
            first = false;
        } else {
            result += toupper(word[0]) + word.substr(1);
        }
    }

    return result;
}

std::string split(const std::string& s, const std::string& delimiter) {
    size_t pos = 0;
    std::string token;

    while ((pos = s.find(delimiter)) != std::string::npos) {
        token = s.substr(0, pos);
        s = s.substr(pos + delimiter.size()).str(); // or just s = s.substr(pos + delimiter.size()) if you're using C++11
    }

    return token;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    if(input.empty()) {
        std::cout << "Error: Input cannot be empty." << std::endl;
    } else {
        std::cout << toCamelCase(input) << std::endl;
    }
    
    return 0;
}