#include <iostream>
#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> parse_music(std::string music_string) {
    std::vector<int> beats;
    int note_duration = 0;
    for (char c : music_string) {
        if (c == 'o' || c == '|') {
            beats.push_back(note_duration + 1);
            note_duration = 0;
        } else if (c == '.') {
            note_duration++;
        }
    }
    beats.push_back(note_duration + 1);
    return beats;
}

int main() {
    assert(issame(parse_music("o| .| o| .| o o| o o|"), {2, 1, 2, 1, 4, 2, 4, 2}));
    return 0;
}