#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> parse_music(string music_string);

int main() {
    assert(issame(parse_music("o| .| o| .| o o| o o|"), {2, 1, 2, 1, 4, 2, 4, 2}));
    return 0;
}

vector<int> parse_music(string music_string) {
    vector<int> beats;
    int length = music_string.length();
    for (int i = 0; i < length; ++i) {
        if (music_string[i] == 'o') {
            beats.push_back(4);
        } else if (music_string.substr(i, 2) == "o|") {
            beats.push_back(2);
            ++i;
        } else if (music_string.substr(i, 2) == ".|") {
            beats.push_back(1);
            ++i;
        }
    }
    return beats;
}