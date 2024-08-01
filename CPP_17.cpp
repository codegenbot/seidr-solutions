#include <iostream>
#include <vector>
#include <cassert>
#include <string>

std::vector<int> parse_music(std::string music_string) {
    std::vector<int> beats;
    int i = 0;
    while (i < music_string.size()) {
        if (music_string[i] == 'o' && i + 1 < music_string.size() && music_string[i + 1] == ' ') {
            beats.push_back(4);
            i += 3;
        } else if (music_string[i] == '.' && i + 1 < music_string.size() && music_string[i + 1] == ' ') {
            beats.push_back(1);
            i += 3;
        } else {
            beats.push_back(2);
            i += 4;
        }
        i++; 
    }
    return beats;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }

    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }

    return true;
}

int main() {
    assert(issame(parse_music("o| .| o| .| o o| o o|"), { 4, 1, 4, 1, 4, 4, 4, 4 }));
    return 0;
}