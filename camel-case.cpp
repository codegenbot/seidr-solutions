```cpp
#include <iostream>
#include <string>

std::string split(const std::string& s, const std::string& delimiter) {
    size_t pos = 0;
    std::string token;

    while ((pos = s.find(delimiter)) != std::string::npos) {
        token = s.substr(0, pos);
        s = s.substr(pos + delimiter.size());
    }

    return token;
}

std::string toCamelCase(const std::string& s) {
    std::string result;
    bool first = true;

    for (const auto& word : split(s, " -")) {
        if (first) {
            result += std::move(word);
            first = false;
        } else {
            result += toupper(word[0]) + word.substr(1);
        }
    }

    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    try {
        if(input.empty()) throw std::runtime_error("Error: Input string is empty");
        std::cout << toCamelCase(input) << std::endl;
    } catch(const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << '\n';
    }
    return 0;
}