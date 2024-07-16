#include <iostream>
#include <string>

std::string camelCase(const std::string& str) {
    std::string result = "";
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

    std::string temp = "";
    temp += toupper(str[0]); 
    result += temp;
    temp.clear();
    for (int i = 1; i < str.length(); ++i) {
        if (str[i] == '-') {
            continue;
        }
        temp += tolower(str[i]);
    }
    result += temp;

    return result;
}

int main() {
    std::string str;
    while (std::cin >> str) {
        std::cout << camelCase(str) << std::endl;
    }
    return 0;
}