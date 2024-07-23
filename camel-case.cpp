```#include <vector>

std::string camelCase(std::string str) {
    std::vector<std::string> words;
    size_t pos = 0, start = 0;

    while ((pos = str.find_first_of(" -")) != std::string::npos) {
        if (pos > start) {
            words.push_back(str.substr(start, pos - start));
        }
        start = pos + 1;
    }

    if (start < str.length()) {
        words.push_back(str.substr(start));
    }

    std::string result = tolower(words[0]);
    for (int i = 1; i < words.size(); i++) {
        result += std::toupper(words[i][0]) + words[i].substr(1);
    }
    return result;
}``