#include <vector>
#include <cassert>
#include <string>

bool issame(std::vector<int> a, std::vector<int> b);

std::vector<int> parse_music(const std::string& music) {
    std::vector<int> parsed_music;
    size_t pos = 0;
    while ((pos = music.find("|")) != std::string::npos) {
        std::string token = music.substr(0, pos);
        if (token == "o") parsed_music.push_back(2);
        else if (token == ".") parsed_music.push_back(1);
        else parsed_music.push_back(0); // Other possible cases handled as 0
        music.erase(0, pos + 1);
    }
    // Include the last element
    if (!music.empty()) {
        if (music == "o") parsed_music.push_back(2);
        else if (music == ".") parsed_music.push_back(1);
        else parsed_music.push_back(0); // Other possible cases handled as 0
    }
    return parsed_music;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    assert(issame(parse_music("o| .| o| .| o o| o o|"), {2, 1, 2, 1, 4, 2, 4, 2}));
}