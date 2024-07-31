#include <vector>
#include <string>

bool operator==(const std::vector<int>& a, const std::vector<int>& b) {
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
        } else if (music_string[i] == '|' && music_string[i - 1] == 'o') {
            beats.back() = 2;
        } else if (music_string[i] == '|' && music_string[i - 1] == '.') {
            beats.back() = 1;
        }
    }
    return beats;
}

int main() {
    assert(operator==(parse_music("o| .| o| .| o o| o o|"), {2, 1, 2, 1, 4, 2, 4, 2}));
}