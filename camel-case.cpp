#include <vector>
#include <iostream>
#include <string>

std::string camelCase(const std::string& str) {
    std::vector<std::string> words;
    size_t pos = 0, start = 0;

    while ((pos = str.find(" ")) != std::string::npos) {
        words.push_back(str.substr(start, pos - start));
        start = pos + 1;
    }

    words.push_back(str.substr(start));

    for (size_t i = 0; i < words.size(); ++i) {
        if (i > 0)
            std::cout << std::capitalize(words[i][0]);
        else
            std::cout << words[i];
    }
    return "";
}

int main() {
    std::string str;
    while(std::cin >> str){
        std::cout<<camelCase(str)<<"\n";
    }
    return 0;
}