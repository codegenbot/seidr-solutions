#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<int> parse_music(string music_string);

bool issame(vector<int> a, vector<int> b);

vector<int> parse_music(string music_string) {
    vector<int> beats;
    size_t pos = 0;
    while ((pos = music_string.find("o", pos)) != string::npos) {
        if (music_string[pos + 1] == '|') {
            beats.push_back(2);
            pos += 2;
        } else {
            beats.push_back(4);
            pos++;
        }
    }
    pos = 0;
    while ((pos = music_string.find(".|", pos)) != string::npos) {
        beats.push_back(1);
        pos += 2;
    }
    return beats;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(parse_music("o| .| o| .| o o| o o|"), {2, 1, 2, 1, 4, 2, 4, 2}));
    cout << "Test passed successfully!" << endl;
    return 0;
}