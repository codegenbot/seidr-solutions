#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

vector<int> parse_music(string music_string);

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(parse_music("o| .| o| .| o o| o o|"), {2, 1, 2, 1, 4, 2, 4, 2}));

    return 0;
}

vector<int> parse_music(string music_string){
    vector<int> beats;
    string note = "";
    for (int i = 0; i < music_string.length(); i++) {
        if (music_string[i] == 'o') {
            if (note == "o") {
                beats.push_back(4);
                note = "";
            } else {
                note = "o";
            }
        } else if (music_string[i] == '|') {
            if (note == "o") {
                beats.push_back(2);
                note = "";
            } else {
                beats.push_back(1);
                note = "";
            }
        } else if (music_string[i] == '.') {
            if (note == "o") {
                beats.push_back(2);
                note = "";
            } else {
                beats.push_back(1);
                note = "";
            }
        }
    }
    return beats;
}