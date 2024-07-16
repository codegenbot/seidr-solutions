#include <iostream>
#include <vector>
#include <string>

vector<int> parse_music(string music_string);

bool issame(vector<int> a, vector<int> b);

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<int> parse_music(string music_string){
    vector<int> beats;
    int length = music_string.length();
    for (int i = 0; i < length; i++) {
        if (music_string[i] == 'o') {
            beats.push_back(4);
        } else if (music_string[i] == '|') {
            if (music_string[i - 1] == 'o') {
                beats.back() = 2;
            } else {
                beats.back() = 1;
            }
        }
    }
    return beats;
}

int main() {
    // Read input from user
    string music_string;
    cin >> music_string;

    vector<int> parsed_beats = parse_music(music_string);

    vector<int> test_beats = {4, 1, 2, 4, 1}; // Change this as per the test case
    if (issame(parsed_beats, test_beats)) {
        cout << "Match" << endl;
    } else {
        cout << "Mismatch" << endl;
    }

    return 0;
}