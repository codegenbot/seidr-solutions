#include <vector>
#include <string>
#include <sstream>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> parse_music(const std::string& music) {
    std::vector<int> result;
    std::istringstream iss(music);
    std::string token;
    while (std::getline(iss, token, '|')) {
        if (token == "o") {
            result.push_back(1);
        } else if (token == ".") {
            result.push_back(2);
        }
    }
    return result;
}

int main() {
    assert(issame(parse_music("o| .| o| .| o o| o o|"), {2, 1, 2, 1, 1, 2, 1, 2}));
    return 0;
}