#include <iostream>
#include <string>

std::string camelCase(const std::string& str) {
    std::string result;
    bool capitalize = true;

    for (char c : str) {
        if (c == '-') {
            capitalize = true;
        } else {
            if (capitalize) {
                result += toupper(c);
                capitalize = false;
                result.push_back(' '); 
            } else {
                result += tolower(c);
            }
        }
    }

    if (!result.empty()) {
        result.erase(result.find_last_not_of(' ') + 1, 0);
        result[0] = toupper(result[0]);
    }

    return result;
}

int main() {
    std::string str;
    std::cin >> str;
    std::cout << camelCase(str) << std::endl;

    return 0;
}