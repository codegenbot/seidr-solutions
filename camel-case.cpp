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
            result += std::toupper(word[0]);
            result += word.substr(1);
        }
    }

    return result;
}

std::string split(const std::string& s, const std::string& delimiter) {
    size_t pos = 0;
    std::string token;

    while ((pos = s.find(delimiter)) != std::string::npos) {
        token = s.substr(0, pos);
        s = s.substr(pos + delimiter.size());
    }

    return token;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    try {
        if (input.empty()) {
            throw std::runtime_error("Input cannot be empty");
        }

        std::cout << toCamelCase(input) << std::endl;
    } catch(const std::exception& e) {
        std::cerr << "Error: " << e.what() << '\n';
    }

    return 0;
}