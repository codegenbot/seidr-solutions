#include <iostream>
#include <vector>
#include <cassert>

std::vector<int> parse_music(std::string music_string) {
    std::vector<int> parsed_music;
    int count = 1;
    for (char c : music_string) {
        if (c == 'o') {
            parsed_music.push_back(count);
            count = 1;
        }
        else if (c == '|') {
            count++;
        }
    }
    return parsed_music;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert (issame(parse_music("o| .| o| .| o o| o o|"), {2, 1, 2, 1, 4, 2, 4, 2}));
    return 0;
}