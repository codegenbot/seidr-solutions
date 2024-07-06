#include <stdio.h>
#include <vector>
#include <string>
using namespace std;

vector<int> parse_music(string music_string) {
    vector<int> result;
    string note;
    for (char c : music_string) {
        if (c == 'o' || c == 'o|') {
            note = "oo";
        } else if (c == '.' || c == '.|') {
            note += c;
        } else {
            continue;
        }
        int beats = 4;
        if (note == "o|") {
            beats = 2;
        } else if (note == ".|") {
            beats = 1;
        }
        result.push_back(beats);
        note.clear();
    }
    return result;
}