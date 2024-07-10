#include <vector>
#include <string>

using namespace std;

vector<int> parse_music(string music_string) {
    vector<int> beats;
    string note;
    int duration = 0;

    for (char c : music_string) {
        if (c == 'o' || c == 'o|') {
            duration = 4;
        } else if (c == '.') {
            duration = 1;
        } else if (c == '|') {
            duration /= 2;
        }

        note += c;

        if (note == "o" || note == "o|" || note == ".|") {
            beats.push_back(duration);
            note = "";
            duration = 0;
        }
    }

    return beats;
}