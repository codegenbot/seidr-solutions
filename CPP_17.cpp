#include <iostream>
#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> parse_music(std::string music_string);

int main() {
    assert(issame(parse_music("o| .| o| .| o o| o o|"), {2, 1, 2, 1, 4, 2, 4, 2}));
    return 0;
}

std::vector<int> parse_music(std::string music_string) {
    std::vector<int> beats;
    int duration = 0;
    for (char note : music_string) {
        if (note == 'o') {
            beats.push_back(duration + 1);
            duration = 0;
        } else if (note == '|') {
            beats.push_back(duration);
            duration = 0;
        } else if (note == '.') {
            duration++;
        }
    }
    if (duration > 0) {
        beats.push_back(duration);
    }
    return beats;
}