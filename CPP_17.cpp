#include <iostream>
#include <vector>
#include <cassert>

template<typename T>
bool issame(const std::vector<T>& v1, const std::vector<T>& v2) {
    return v1 == v2;
}

template<typename T>
std::vector<T> parse_music(std::string music_string) {
    std::vector<T> beats;
    T note_length = 0;
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

int main() {
    std::vector<int> expected = {4, 1, 1, 4};
    std::vector<int> parsed = parse_music<int>("o.|.o");
    assert(issame(parsed, expected));
    
    return 0;
}