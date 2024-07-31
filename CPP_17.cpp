#include <iostream>
#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> parse_music(std::string music_string) {
    std::vector<int> beats;
    int i = 0;
    while (i < music_string.size()) {
        if (music_string[i] == 'o') {
            beats.push_back(4);
            i += 2;
        } else if (music_string[i] == '.') {
            beats.push_back(1);
            i += 2;
        } else {
            beats.push_back(2);
            i += 3;
        }
    }
    return beats;
}

int main() {
    assert(issame(parse_music("o| .| o| .| o o| o o|"), {4, 1, 4, 1, 4, 4, 4, 4}));
    return 0;
}