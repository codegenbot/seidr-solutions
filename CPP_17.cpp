#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> parse_music(string music_string) {
    vector<int> result;
    string note = "";
    for (char c : music_string) {
        if (c == 'o' || c == '.' || c == '|') {
            if (!note.empty()) {
                int beats = 0;
                switch (note[0]) {
                    case 'o':
                        beats = 4;
                        break;
                    case '.':
                        beats = 1;
                        break;
                    case 'o':
                    case '|':
                        beats = 2;
                        break;
                }
                result.push_back(beats);
            }
            note = "";
        } else {
            note += c;
        }
    }
    if (!note.empty()) {
        int beats = 0;
        switch (note[0]) {
            case 'o':
                beats = 4;
                break;
            case '.':
                beats = 1;
                break;
            case 'o':
            case '|':
                beats = 2;
                break;
        }
        result.push_back(beats);
    }
    return result;
}

int main() {
    string music_string = "o o| .| o| o| .| .| .| .| o o";
    vector<int> result = parse_music(music_string);
    for (int beat : result) {
        cout << beat << " ";
    }
    cout << endl;
    return 0;
}