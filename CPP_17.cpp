#include <vector>
#include <string>
#include <cassert>

std::vector<int> parse_music(std::string music_string) {
    std::vector<int> parsed_music;
    size_t pos = 0;
    while ((pos = music_string.find("|", pos)) != std::string::npos) {
        parsed_music.push_back(std::stoi(music_string.substr(pos - 1, 1)));
        pos++;
    }
    return parsed_music;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(parse_music("o| .| o| .| o o| o o|"), {2, 1, 2, 1, 4, 2, 4, 2}));
    return 0;
}