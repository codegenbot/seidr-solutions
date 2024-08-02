#include <stdio.h>
#include <vector>
#include <string>
using namespace std;

vector<int> parse_music(string music_string) {
    vector<int> result;
    int beats = 4; // initialize beats for each note
    
    for (char c : music_string) {
        if (c == 'o') { // whole note
            result.push_back(beats);
            beats = 4;
        } else if (c == '|') { // note duration change
            if (beats > 1) {
                result.push_back(beats / 2); // update beats for next note
                beats /= 2; // half the beats
            }
        } else if (c == '.') { // quater note
            result.push_back(1);
            beats = 4;
        }
    }
    
    return result;
}