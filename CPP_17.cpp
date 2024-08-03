#include <vector>
#include <string>
#include <iostream>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b);

std::vector<int> parse_music(std::string music_string) {
    std::vector<int> beats;
    int count = 0;
    for (char c : music_string) {
        if (c == 'o') {
            beats.push_back(4);
        } else if (c == '|') {
            beats.push_back(count);
            count = 0;
        } else if (c == '.') {
            count++;
        }
    }
    beats.push_back(count);
    return beats;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(parse_music("o| .| o| .| o o| o o|"), std::vector<int>{2, 1, 2, 1, 4, 2, 4, 2}));
    return 0;
}