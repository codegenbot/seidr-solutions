#include <vector>
#include <string>
using namespace std;

vector<int> parse_music(string music_string) {
    vector<int> beats;
    int note_length = 0;
    for (char note : music_string) {
        if (note == 'o') {
            beats.push_back(4);
        } else if (note == '|') {
            beats.push_back(note_length);
            note_length = 0;
        } else if (note == '.') {
            note_length++;
        }
    }
    beats.push_back(note_length);

    return beats;
}