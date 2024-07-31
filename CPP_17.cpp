#include <iostream>
#include <vector>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> parse_music(std::string music_string);

int main() {
    std::vector<int> result = parse_music("o| .| o| .| o o| o o|");
    return 0;
}

std::vector<int> parse_music(std::string music_string) {
    std::vector<int> beats;
    int length = music_string.size();
    for (int i = 0; i < length; ++i) {
        if (music_string[i] == 'o') {
            beats.push_back(4);
        } else if (music_string[i] == '|' && music_string[i - 1] == 'o') {
            beats.push_back(2);
        } else if (music_string[i] == '|' && music_string[i - 1] == '.') {
            beats.push_back(1);
        }
    }
    return beats;
}