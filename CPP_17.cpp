#include <vector>
#include <string>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<int> parse_music(string music_string) {
    vector<int> parsed_music;
    size_t pos = 0;
    while ((pos = music_string.find("|")) != string::npos) {
        string note = music_string.substr(0, pos);
        music_string.erase(0, pos + 1);

        if (note == "o") {
            parsed_music.push_back(1);
        } else if (note == ".") {
            parsed_music.push_back(2);
        } else if (note == " ") {
            parsed_music.push_back(0);
        }
    }

    return parsed_music;
}

int main() {
    assert(issame(parse_music("o| .| o| .| o o| o o|"), {2, 1, 2, 1, 4, 2, 4, 2}));
    return 0;
}