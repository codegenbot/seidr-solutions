#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> parse_music(string music_string) {
    vector<int> beats;
    int current_beats = 0;
    for (char c : music_string) {
        if (c == 'o') {
            current_beats += 4;
        } else if (c == '|') {
            current_beats /= 2;
        }
    }
    beats.push_back(current_beats);
    return beats;
}