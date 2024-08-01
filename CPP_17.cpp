#include <iostream>
#include <vector>
#include <cassert>
#include <string>

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
    assert(issame(std::vector<int>({ 4, 1, 4, 1, 2, 4, 4, 4 }), std::vector<int>({ 4, 1, 4, 1, 2, 4, 4, 4 })));
    return 0;
}