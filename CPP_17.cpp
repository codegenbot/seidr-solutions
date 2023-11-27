#include <iostream>
#include <vector>
#include <string>
#include <cassert>

std::vector<int> parse_music(std::string music_string);

std::vector<int> parse_music(std::string music_string) {
    std::vector<int> beats;
    std::string note = "";
    for (int i = 0; i < music_string.length(); i++) {
        if (music_string[i] == 'o') {
            if (note == "o|") {
                beats.push_back(2);
            } else if (note == ".|") {
                beats.push_back(1);
            } else if (note == "") {
                beats.push_back(4);
            }
            note = "o";
        } else if (music_string[i] == '|') {
            note += "|";
        } else if (music_string[i] == '.') {
            note += ".";
        }
    }
    return beats;
}

int main() {
    std::vector<int> expected = {2, 1, 2, 1, 4, 2, 4, 2};
    std::vector<int> parsed_music = parse_music("o| .| o| .| o o| o o|");
    assert(std::is_same(parsed_music, expected));

    return 0;
}