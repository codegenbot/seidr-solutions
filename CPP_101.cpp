#include <vector>
#include <string>
#include <cassert>
#include <sstream>

std::vector<std::string> split(const std::string& s, char delimiter) {
    std::vector<std::string> tokens;
    std::string token;
    std::istringstream tokenStream(s);
    while (std::getline(tokenStream, token, delimiter)) {
        tokens.push_back(token);
    }
    return tokens;
}

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

int main() {
    std::string words_string = "ahmed,gamal";
    assert(issame(split(words_string, ','), {"ahmed", "gamal"}));
    return 0;
}