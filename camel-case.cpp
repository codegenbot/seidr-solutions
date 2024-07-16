#include <string>
#include <sstream>

std::string camelCase(const std::string& str) {
    std::string result;
    bool capitalizeNext = true;

    for (char c : str) {
        if (c == '-') {
            capitalizeNext = true;
        } else if (capitalizeNext) {
            result += toupper(c);
            capitalizeNext = false;
        } else {
            result += tolower(c);
        }
    }

    return result;
}

int main() {
    std::string str;
    std::cout << "Enter a string in kebab-case: ";
    std::getline(std::cin, str);

    std::stringstream ss(str);
    std::string word;

    while (std::getline(ss, word, '-')) {
        if (!word.empty()) {
            if (result.empty())
                result = camelCase(word);
            else
                result += camelCase(word).substr(0,1).toupper() + camelCase(word).substr(1);
        }
    }

    std::cout << "camelCase: " << result << std::endl;

    return 0;
}