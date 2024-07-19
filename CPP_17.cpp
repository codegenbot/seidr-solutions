#include <vector>
#include <string>
#include <cassert>

vector<int> parse_music(string music_string);

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> parse_music(string music_string) {
    vector<int> beats;
    for (int i = 0; i < music_string.size(); ++i) {
        if (music_string[i] == 'o') {
            beats.push_back(4);
        } else if (music_string[i] == '|' && music_string[i + 1] == 'o') {
            beats.push_back(2);
            ++i;
        } else if (music_string[i] == '|' && music_string[i + 1] == '.') {
            beats.push_back(1);
            ++i;
        }
    }
    return beats;
}