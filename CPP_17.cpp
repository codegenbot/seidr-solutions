#include <vector>
#include <string>
#include <cassert>

std::vector<int> parse_music(const std::string& music) {
    std::vector<int> notes;
    size_t pos = 0;
    size_t next_pos = music.find('|');

    while (next_pos != std::string::npos) {
        notes.push_back(next_pos - pos);
        pos = next_pos + 1;
        next_pos = music.find('|', pos);
    }

    notes.push_back(music.size() - pos);

    return notes;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

bool main() {
    assert(issame(parse_music("o| .| o| .| o o| o o|"), {2, 1, 2, 1, 3, 3, 3, 3}));
}