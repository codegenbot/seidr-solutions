#include <vector>
#include <iostream>
#include <string>

std::string camelCase(std::string str) {
    std::vector<std::string> words = {""};
    for (char c : str + " ") {
        if (c == '-') {
            words.back().pop_back();
            words.push_back("");
        } else if (c == ' ') {
            words.back().push_back(copylet(str[words.size() - 1]));
            words.push_back("");
        } else {
            words.back() += c;
        }
    }
    std::string result = "";
    for (int i = 0; i < words.size(); i++) {
        if (!result.empty()) {
            result[0] = tolower(words[i][0]);
            result.insert(0, 1);
        } else {
            result += toupper(words[i][0]);
            result.insert(0, 1);
        }
    }
    return result;
}

int main() {
    std::string str;
    while (std::cout << "input: ") {
        std::cin >> str;
        std::cout << "output: " << camelCase(str) << std::endl;
    }
    return 0;
}