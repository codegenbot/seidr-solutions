#include <iostream>
#include <string>

std::string kebabToCamel(std::string str) {
    std::vector<std::string> words;
    size_t pos = 0;
    
    while ((pos = str.find(" ")) != std::string::npos) {
        words.push_back(str.substr(0, pos));
        str.erase(0, pos + 1);
    }
    
    if (!str.empty())
        words.push_back(str);

    for (size_t i = 0; i < words.size(); ++i) {
        size_t dashPos = words[i].find("-");
        
        while (dashPos != std::string::npos) {
            words[i].replace(0, dashPos + 1, words[i].substr(0, dashPos + 1).toupper());
            words[i].erase(0, dashPos + 1);
            dashPos = words[i].find("-");
        }
        
        if (!words[i].empty())
            words[i] = words[i].substr(0, 1).toupper() + words[i].substr(1);
    }

    std::string result;
    
    for (const auto& word : words)
        result += word + " ";
    
    return result.substr(0, result.size() - 1);
}

int main() {
    std::cout << kebabToCamel("nospaceordash") << std::endl;
    std::cout << kebabToCamel("two-words") << std::endl;
    std::cout << kebabToCamel("two words") << std::endl;
    std::cout << kebabToCamel("all separate words") << std::endl;
    
    return 0;
}