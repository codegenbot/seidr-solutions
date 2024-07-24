#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

bool issame(const vector<int>& a, const vector<int>& b){
    return a == b;
}

vector<int> parse_music(string music_string);

int main(){
    assert(issame(parse_music("o| .| o| .| o o| o o|"), {2, 1, 2, 1, 4, 2, 4, 2}));

    return 0;
}

vector<int> parse_music(string music_string){
    vector<int> beats;
    int note_duration = 0;

    for (char c : music_string) {
        if (c == 'o') {
            beats.push_back(note_duration + 1);
            note_duration = 3;
        } else if (c == '|') {
            beats.push_back(note_duration + 1);
            note_duration = 1;
        } else if (c == '.') {
            beats.push_back(note_duration + 1);
            note_duration = 0;
        }
    }

    beats.push_back(note_duration + 1);

    return beats;
}