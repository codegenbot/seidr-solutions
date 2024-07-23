#include <stdio.h>
#include <vector>
#include <string>
using namespace std;

vector<int> parse_music(string music_string) {
    vector<int> result;
    string note;
    int beats = 0;
    for (char c : music_string) {
        if (c == 'o' || c == 'o|') {
            beats = 4;
        } else if (c == '.') {
            beats = 1;
        } else if (c == '|') {
            beats /= 2;
        }
        note += c;
        if (note.back() != '|') continue;

        for (int i = 0; i < beats; i++) {
            result.push_back(1);
        }

        note.pop_back();
    }

    while (!note.empty()) {
        if (note.back() == 'o') {
            result.push_back(4);
        } else if (note.back() == '.') {
            result.push_back(1);
        }
        note.pop_back();
    }

    return result;
}