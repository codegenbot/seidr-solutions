#include <vector>
#include <string>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> parse_music(string music_string) {
    vector<int> beats;
    string note = "";
    for (char c : music_string) {
        if (c == 'o') {
            if (note == "") {
                beats.push_back(4);
            } else {
                beats.push_back(2);
            }
        } else if (c == '.') {
            beats.push_back(1);
        } else if (c == '|') {
            note = "";  // Reset note string
        }
    }
    return beats;
}