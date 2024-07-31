#include <vector>
#include <cassert>

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

std::vector<int> parse_music(std::string music_string) {
    std::vector<int> beats;
    int length = music_string.size();
    for (int i = 0; i < length; ++i) {
        if (music_string[i] == 'o') {
            beats.push_back(4);
        } else if (music_string[i] == '|' && (i == 0 || music_string[i - 1] == 'o')) {
            beats.push_back(2);
        } else if (music_string[i] == '|' && (i == 0 || music_string[i - 1] == '.')) {
            beats.push_back(1);
        }
    }
    return beats;
}

int main() {
    std::vector<int> expected = {2, 1, 2, 1, 4, 2, 4, 2};
    assert(issame(parse_music("o| .| o| .| o o| o o|"), expected));
    return 0;
}