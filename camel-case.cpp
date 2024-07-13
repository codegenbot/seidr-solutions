```cpp
#include <string>
#include <sstream>
#include <vector>

std::string camelCase(const std::string& input) {
    std::stringstream iss;
    std::string word;
    std::vector<std::string> words;

    for (const auto &s : input.split '-') {
        if (!s.empty())
            words.push_back(s);
    }

    std::string result = std::move(words[0]).substr(1);

    for (int i = 1; i < words.size(); ++i)
        result += char(std::toupper(words[i][0])) + std::string(words[i].erase(0, 1));

    return result;
}