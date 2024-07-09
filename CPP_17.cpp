#include <stdio.h>
#include <vector>
#include <string>
using namespace std;

vector<int> parse_music(string music_string) {
    vector<int> result;
    string note;
    int beats = 4; // default duration for a whole note
    
    for (char c : music_string) {
        if (c == 'o' || c == 'o|') {
            result.push_back(beats);
            beats = 4; // reset to whole note duration
        } else if (c == '.') {
            result.push_back(1); // quarter note, lasts one beat
            beats = 1;
        } else if (c == '|') {
            if (beats == 2) { // half note, lasts two beats
                result.push_back(beats);
                beats = 4; // reset to whole note duration
            } else if (beats == 1) { // quarter note, lasts one beat
                result.push_back(beats);
                beats = 4; // reset to whole note duration
            }
        }
    }
    
    return result;
}