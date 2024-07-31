#include <vector>
#include <string>
#include <cassert>

std::vector<int> parse_music(std::string music_string);
bool issame(std::vector<int> a, std::vector<int> b);

std::vector<int> parse_music(std::string music_string) {
    std::vector<int> beats;
    for (int i = 0; i < music_string.size(); ++i) {
        if (music_string[i] == 'o') {
            beats.push_back(4);
        } else if (music_string[i] == '|') {
            if (i > 0 && music_string[i - 1] == 'o') {
                beats[beats.size() - 1] = 2;
            } else {
                beats.push_back(2);
            }
        } else if (music_string[i] == '.') {
            beats.push_back(1);
        }
    }
    return beats;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(issame(parse_music("o| .| o| .| o o| o o|"), {2, 1, 2, 1, 4, 2, 4, 2}));
}