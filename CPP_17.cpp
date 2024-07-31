#include <iostream>
#include <vector>
#include <cassert>

std::vector<int> parse_music(std::string music_string);

int main() {
    assert(parse_music("o| .| o| .| o o| o o|") == std::vector<int>({2, 1, 2, 1, 4, 2, 4, 2}));
    return 0;
}

std::vector<int> parse_music(std::string music_string) {
    std::vector<int> beats;
    int length = music_string.size();
    for (int i = 0; i < length; ++i) {
        if (music_string[i] == 'o') {
            beats.push_back(4);
        } else if (music_string[i] == '|') {
            continue; // Skip '|' characters
        } else if (music_string[i] == '.') {
            beats.back() *= 2;
        }
    }
    return beats;
}