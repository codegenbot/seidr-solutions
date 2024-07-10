#include <iostream>
#include <vector>

using namespace std;

bool issame(vector<int> v1, vector<int> v2) {
    if (v1.size() != v2.size()) {
        return false;
    }
    for (int i = 0; i < v1.size(); ++i) {
        if (v1[i] != v2[i]) {
            return false;
        }
    }
    return true;
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

int main() {
    string input_music = "o||o|o";
    vector<int> parsed_beats = parse_music(input_music);
    vector<int> expected_beats = {4, 1, 2, 4};
    
    if (issame(parsed_beats, expected_beats)) {
        cout << "Parsed music beats match expected beats." << endl;
    } else {
        cout << "Parsed music beats do not match expected beats." << endl;
    }

    return 0;
}