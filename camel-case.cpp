#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::string result = "";
    int first = 1;

    for (int i = 0; i < str.length(); ++i) {
        if (str[i] == '-') {
            if (!first)
                result += toupper(str[++i]);
            else
                first = 0;
        } else if (str[i] == ' ')
            continue;
        else
            result += (first ? tolower(str[i]) : toupper(str[i]));
    }

    return result;
}

int main() {
    std::string str;
    while (std::cin >> str) {
        std::cout << camelCase(str) << '\n';
    }
    return 0;
}