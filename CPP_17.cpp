#include <vector>
#include <cassert>
#include <string>
#include <sstream>

std::vector<int> parse_music(const std::string& music) {
    std::vector<int> result;
    std::stringstream ss(music);
    char c;
    while (ss >> c) {
        if (c == 'o') {
            result.push_back(2);
        } else if (c == '.') {
            result.push_back(1);
        }
    }
    return result;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame(parse_music("o| .| o| .| o o| o o|"), {2, 1, 2, 1, 4, 2, 4, 2}));
    return 0;
}