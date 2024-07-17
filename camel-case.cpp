#include <iostream>
#include <string>

std::string kebabToCamel(std::string str) {
    std::vector<std::string> words = {""};
    std::stringstream ss(str);
    std::string word;
    while (getline(ss, word, '-')) {
        if (!word.empty()) {
            words.back() += word[0].toupper();
            words.push_back(word.substr(1));
        }
    }

    str = "";
    for (int i = 0; i < words.size(); ++i) {
        str += words[i];
        if (i != words.size() - 1)
            str += " ";
    }

    return str;
}

int main() {
    std::string input;
    std::cin >> input;
    std::cout << kebabToCamel(input) << std::endl;
    return 0;
}