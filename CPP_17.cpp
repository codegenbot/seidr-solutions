#include <iostream>
#include <vector>
#include <string>
#include <cassert>

template<typename T>
bool issame(std::vector<T> v1, std::vector<T> v2) {
    return v1 == v2;
}

std::vector<int> parse_music(std::string music_string);

int main() {
    std::string test_music = "o|o.o|";
    std::vector<int> expected_result = {4, 1, 1};
    assert(issame(parse_music(test_music), expected_result));
    return 0;
}

std::vector<int> parse_music(std::string music_string){ 
    std::vector<int> beats;
    int note_length = 0;
    for (char c : music_string) {
        if (c == 'o') {
            note_length = 4;
        } else if (c == '|') {
            beats.push_back(note_length);
            note_length = 0;
        } else if (c == '.') {
            note_length = 1;
        }
    }
    if (note_length != 0) {
        beats.push_back(note_length);
    }
    return beats;
}