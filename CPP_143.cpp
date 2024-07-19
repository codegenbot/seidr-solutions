#include <vector>
#include <string>
#include <sstream>

std::vector<std::string> split(const std::string& str) {
    std::vector<std::string> tokens;
    std::stringstream ss(str);
    std::string token;

    while (getline(ss, token, ' ')) {
        tokens.push_back(token);
    }

    return tokens;
}

int main() {
    assert(words_in_sentence("here is") == "is");
    return 0;
}