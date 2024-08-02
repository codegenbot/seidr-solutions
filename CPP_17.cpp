#include <stdio.h>
#include <vector>
#include <string>
using namespace std;

vector<int> parse_music(string music_string) {
    vector<int> beats;
    string note;
    int beat_count = 0;

    for (char c : music_string) {
        if (c == 'o' || c == 'o|') {
            if (c == 'o|')
                beat_count = 2;
            else
                beat_count = 4;
            beats.push_back(beat_count);
        } else if (c == '.') {
            beats.push_back(1);
        }
    }

    return beats;
}