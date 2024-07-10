#include <iostream>
#include <vector>

using namespace std;

vector<int> parse_music(string music_string);

bool issame(const vector<int>& vec1, const vector<int>& vec2) {
    if (vec1.size() != vec2.size()) {
        return false;
    }
    for (int i = 0; i < vec1.size(); ++i) {
        if (vec1[i] != vec2[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    string music_string = "o|o";
    vector<int> beats = parse_music(music_string);
    vector<int> expected_beats = {4, 2, 4};
    cout << "Output matches expected: " << boolalpha << issame(beats, expected_beats) << endl;
    return 0;
}

vector<int> parse_music(string music_string) {
    vector<int> beats;
    for (int i = 0; i < music_string.size(); ++i) {
        if (music_string[i] == 'o') {
            beats.push_back(4);
        } else if (music_string[i] == '|' && music_string[i - 1] == 'o') {
            beats.back() = 2;
        } else if (music_string[i] == '|' && music_string[i - 1] == '.') {
            beats.back() = 1;
        }
    }
    return beats;
}