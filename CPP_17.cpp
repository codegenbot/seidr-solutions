#include <vector>
#include <string>
#include <cassert>

std::vector<int> parse_music(const std::string& music) {
    std::vector<int> result;
    size_t pos = 0;
    while ((pos = music.find("| ")) != std::string::npos) {
        result.push_back((pos / 3) + 1);
        music.erase(0, pos + 2);
    }
    if (!music.empty()) {
        result.push_back((music.size() / 3) + 1);
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(parse_music("o| .| o| .| o o| o o|"), {2, 1, 2, 1, 4, 2, 4, 2}));
    return 0;
}