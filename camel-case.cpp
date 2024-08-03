#include <iostream>
#include <string>

std::string camelCase(std::string s) {
    std::vector<std::string> split = {""};
    for (char c : s + " ") {
        if (c == '-') {
            split.back() += toupper(c + 1);
        } else if (c == ' ') {
            split.push_back("");
        } else {
            split.back() += tolower(c);
        }
    }
    std::string result;
    for (int i = 0; i < split.size(); i++) {
        result += split[i];
        if (i < split.size() - 1) {
            result[0] = toupper(result[0]);
        }
    }
    return result;
}

int main() {
    std::string s;
    std::cout << "Enter a string: ";
    std::cin >> s;
    std::cout << camelCase(s) << "\n";
    return 0;
}