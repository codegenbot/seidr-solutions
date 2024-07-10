#include <iostream>
#include <vector>
using namespace std;

vector<int> parse_music(const string& music_string) {
    vector<int> result;
    int beats = 0;
    for (char c : music_string) {
        if (c == 'o') {
            beats = 4;
        } else if (c == '|') {
            result.push_back(beats);
            beats = 0;
        } else if (c == '.') {
            beats = 1;
        }
    }
    if (beats > 0) {
        result.push_back(beats);
    }
    return result;
}

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

int main() {
    string music_string;
    cin >> music_string;

    vector<int> notes = parse_music(music_string);
    vector<int> reference = {1, 2, 3, 4};

    if (issame(notes, reference)) {
        cout << "Music is correct" << endl;
    } else {
        cout << "Music is incorrect" << endl;
    }

    return 0;
}