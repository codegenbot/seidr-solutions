#include <vector>
#include <cassert>
#include <sstream>
#include <iostream>

std::vector<int> parse_music(const std::string& music) {
    std::vector<int> result;
    std::istringstream iss(music);
    std::string token;

    while (std::getline(iss, token, ' ')) {
        if (token == "o|") {
            result.push_back(1);
        } else if (token == ".|") {
            result.push_back(2);
        } else {
            size_t count = token.find('|');
            result.push_back(std::stoi(token.substr(0, count)));
        }
    }

    return result;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame(parse_music("o| .| o| .| o o| o o|"), {1, 2, 1, 2, 1, 1, 1, 1}));
    return 0;
}