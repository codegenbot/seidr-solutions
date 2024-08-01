#include <vector>
#include <string>
#include <cassert>

std::vector<int> parse_music(const std::string& music) {
    std::vector<int> notes;
    size_t pos = 0;
    size_t next_pos = music.find('|');

    while (next_pos != std::string::npos) {
        notes.push_back(next_pos - pos - 1);
        pos = next_pos + 1;
        next_pos = music.find('|', pos);
    }

    notes.push_back(music.size() - pos - 1);

    return notes;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) {
        return false;
    }

    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }

    return true;
}

int main() {
    assert(issame(parse_music("o| .| o| .| o o| o o|"), {2, 1, 2, 1, 4, 2, 4, 2}));
    return 0;
}