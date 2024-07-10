#include <vector>
#include <string>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> parse_music(const std::string& music_string) {
    std::vector<int> beats;
    for (size_t i = 0; i < music_string.size(); ++i) {
        if (music_string[i] == 'o') {
            beats.push_back(4);
        } else if (music_string[i] == '|' && music_string[i - 1] == 'o') {
            beats.back() = 2;
        } else if (music_string[i] == '|' && music_string[i - 1] == '.') {
            beats.back() = 1;
        }
    }
    return beats;
}

int main() {
    assert(issame(parse_music("o|.|.o|.|.oo|oo|"), {2, 1, 2, 1, 4, 2, 4, 2}));
    return 0;
}