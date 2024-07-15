#include <vector>
#include <string>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b);

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> parse_music(std::string music_string) {
    std::vector<int> beats;
    std::string note = "";
    for (char c : music_string) {
        if (c == 'o') {
            if (note == "") {
                beats.push_back(4);
            } else {
                beats.push_back(2);
            }
        } else if (c == '.') {
            beats.push_back(1);
        } else if (c == '|') {
            note = "";
        }
    }
    return beats;
}

int main() {
    assert(issame(parse_music("o| .| o| .| o o| o o|"), {2, 1, 2, 1, 4, 2, 4, 2}));
    return 0;
}