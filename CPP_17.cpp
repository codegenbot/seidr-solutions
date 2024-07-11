#include <vector>
#include <string>
#include <cassert>

std::vector<int> parse_music(std::string music_string) {
    std::vector<int> result;
    size_t pos = 0;
    while ((pos = music_string.find_first_of("0123456789", pos)) != std::string::npos) {
        result.push_back(std::stoi(music_string.substr(pos)));
        pos = music_string.find_first_not_of("0123456789", pos);
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