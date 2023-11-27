#include <vector>
#include <iostream>
#include <cassert>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> parse_music(string music_string) {
    vector<int> beats;
    int length = music_string.length();
    for (int i = 0; i < length; i += 3) {
        if (music_string[i] == 'o') {
            beats.push_back(4);
        }
        else if (music_string[i + 1] == '|') {
            beats.push_back(2);
        }
        else {
            beats.push_back(1);
        }
    }
    return beats;
}

int main() {
    vector<int> parsed_music = parse_music("o| .| o| .| o o| o o|");
    vector<int> expected_output = { 2, 1, 2, 1, 4, 2, 4, 2 };

    if (parsed_music == expected_output) {
        cout << "Output is correct!" << endl;
    }
    else {
        cout << "Output is incorrect!" << endl;
    }

    return 0;
}