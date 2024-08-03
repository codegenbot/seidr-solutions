#include <vector>
#include <cassert>
#include <string>

bool issame(std::vector<int> a, std::vector<int> b);

std::vector<int> parse_music(const std::string& music) {
    std::vector<int> parsedMusic;
    int count = 0;
    for (char c : music) {
        if (c == 'o') {
            count++;
        } else if (c == '|') {
            parsedMusic.push_back(count);
            count = 0;
        } else if (c == '.') {
            parsedMusic.push_back(1); // Assuming '.' represents 1 in the music string
        }
    }
    return parsedMusic;
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