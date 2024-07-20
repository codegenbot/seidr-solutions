#include <iostream>
#include <string>

std::string toCamelCase(const std::string& s) {
    std::string result;
    bool first = true;

    std::string temp = "";
    for (const auto& word : split(s, " -")) {
        if (!first) {
            temp += toupper(word[0]) + word.substr(1);
        } else {
            temp = word;
        }
        first = false;
        result += temp;
        temp = "";
    }

    return result;
}

std::string split(const std::string& s, const std::string& delimiter) {
    size_t pos = 0;
    std::string token;

    while ((pos = s.find(delimiter)) != 0) {
        token = s.substr(0, pos);
        s = s.substr(pos + delimiter.size());
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