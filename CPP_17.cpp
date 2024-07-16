#include <iostream>
#include <vector>
#include <string>

using namespace std;

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
                beats.push_back(1);
            }
        }
    }
    return beats;
}

bool is_same(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    string music_string;
    cin >> music_string;

    vector<int> parsed_beats = parse_music(music_string);

    vector<int> test_beats = {4, 1, 2, 4, 1};
    if (is_same(parsed_beats, test_beats)) {
        cout << "Match" << endl;
    } else {
        cout << "Mismatch" << endl;
    }

    return 0;
}