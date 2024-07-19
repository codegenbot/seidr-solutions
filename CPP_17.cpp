#include <iostream>
#include <vector>
#include <string>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> parse_music(const std::string& music_string) {
    std::vector<int> beats;
    for (size_t i = 0; i < music_string.size();) {
        if (music_string[i] == 'o' && music_string[i + 2] == '|') {
            beats.push_back(2);
            i += 3;
        } else if (music_string[i] == '.' && music_string[i + 2] == '|') {
            beats.push_back(1);
            i += 3;
        } else {
            beats.push_back(4);
            i++;
        }
    }
    return beats;
}

int main() {
    assert(issame(parse_music("o|.|o|.|oo|oo|"), {2, 1, 2, 1, 2, 2, 4, 2}));
    return 0;
}