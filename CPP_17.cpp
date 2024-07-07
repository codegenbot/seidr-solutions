#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> parse_music(string music_string) {
    vector<int> beats;
    string note;
    int duration = 0;

    for (char c : music_string) {
        if (c == 'o' || c == 'o|') {
            duration = 4;
        } else if (c == '.') {
            duration = 1;
        } else if (c == '|') {
            duration /= 2;
        }
        note += c;

        if ((note.size() > 0 && (note.back() == '|' || note.back() == 'o')) ||
            (note.size() == 1 && (note[0] == '.'))) {
            beats.push_back(duration);
            note.clear();
            duration = 0;
        }
    }

    return beats;
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