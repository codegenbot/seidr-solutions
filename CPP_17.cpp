#include <vector>
#include <string>

using namespace std;

vector<int> parse_music(string music_string) {
    vector<int> result;
    string note = "";
    for (char c : music_string) {
        if (c == 'o' || c == '.' || c == '|') {
            if (!note.empty()) {
                int beats = 0;
                if (note == "o") beats = 4;
                else if (note == "o|") beats = 2;
                else if (note == ".|") beats = 1;
                result.push_back(beats);
            }
            note = "";
        } else {
            note += c;
        }
    }
    // process the last note
    if (!note.empty()) {
        int beats = 0;
        if (note == "o") beats = 4;
        else if (note == "o|") beats = 2;
        else if (note == ".|") beats = 1;
        result.push_back(beats);
    }
    return result;
}