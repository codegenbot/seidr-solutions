#include <vector>

vector<int> parse_music(string music_string) {
    vector<int> beats;
    string note = "";
    for (int i = 0; i < music_string.length(); i++) {
        if (music_string[i] == 'o') {
            if (note == "o|") {
                beats.push_back(2);
            } else if (note == ".|") {
                beats.push_back(1);
            }
            beats.push_back(4);
            note = "";
        } else if (music_string[i] == '|') {
            note = music_string[i-1] + music_string[i];
        }
    }
    return beats;
}

bool issame(vector<int> a, vector<int> b) {
    // implementation of issame function
}

int main() {
    assert(issame(parse_music("o| .| o| .| o o| o o|"), {2, 1, 2, 1, 4, 2, 4, 2}));
    // more code ...
    return 0;
}