#include <stdio.h>
#include <vector>
#include <string>
using namespace std;

vector<int> parse_music(string music_string) {
    vector<int> beats;
    string note;
    int beat_count = 0;

    for (char c : music_string) {
        if (c == 'o' || c == '.' || c == '|') {
            if (!note.empty()) {
                if (note == "o") {
                    beats.push_back(4);
                } else if (note == "o|") {
                    beats.push_back(2);
                } else if (note == ".|") {
                    beats.push_back(1);
                }
                note = "";
            }
            note += c;
        }
    }

    // Add the last note
    if (!note.empty()) {
        if (note == "o") {
            beats.push_back(4);
        } else if (note == "o|") {
            beats.push_back(2);
        } else if (note == ".|") {
            beats.push_back(1);
        }
    }

    return beats;
}