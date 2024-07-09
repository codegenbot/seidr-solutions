#include <stdio.h>
#include <vector>
#include <string>
using namespace std;

vector<int> parse_music(string music_string) {
    vector<int> result;
    string note;
    int beats = 0;

    for (char c : music_string) {
        if (c == 'o' || c == '.' || c == '|') {
            if (note == "o|") {
                result.push_back(2);
                beats = 0;
            } else if (note == ".|") {
                result.push_back(1);
                beats = 0;
            } else if (note == "o") {
                result.push_back(4);
                beats = 0;
            }
            note = "";
        } else {
            note += c;
        }
    }

    return result;
}