#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<int> parse_music(string music_string);

bool is_same_beats(vector<int> a, vector<int> b) {
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

vector<int> parse_music(string music_string) {
    vector<int> beats;
    string note = "";
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
    vector<int> expected = {2, 1, 2, 1, 4, 2, 4, 2};
    vector<int> parsed_music = parse_music("o| .| o| .| o o| o o|");
    assert(is_same_beats(parsed_music, expected));

    return 0;
}