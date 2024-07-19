#include <vector>
#include <string>
#include <sstream>
#include <cassert>

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
    int count = 0;
    for (const auto& word : split("here is")) {
        if (word == "is") {
            ++count;
        }
    }
    assert(count == 1);
    return 0;
}