#include <cstddef>
#include <string>
#include <vector>
#include <algorithm>

std::vector<std::string> tokens;
int anti_shuffle(std::string str, char sep) {
    size_t pos = 0;
    while ((pos = str.find(sep)) != std::string::npos) {
        tokens.push_back(str.substr(0, pos));
        str = str.substr(pos + 1);
    }
    tokens.push_back(str);

    for (size_t i = 0; i < tokens.size(); ++i) {
        size_t j = (i + 1) % tokens.size();
        std::swap(tokens[i], tokens[j]);
    }

    std::string result;
    for (const auto& token : tokens) {
        if (!result.empty())
            result += sep;
        result += token;
    }
    return 0;
}

int main() {
    assert(anti_shuffle("Hi. My name is Mister Robot. How are you?", '.') == 0);
    return 0;
}