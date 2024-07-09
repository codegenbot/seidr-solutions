#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> parse_music(string music_string) {
    vector<int> result;
    int beats = 4; // whole note lasts four beats
    for (char c : music_string) {
        if (c == 'o') { // whole note
            result.push_back(beats);
            beats = 4;
        } else if (c == '|') { // change note length
            if (beats > 1) {
                result.push_back(beats / 2); // half note or quater note
                beats /= 2;
            }
        }
    }
    return result;
}

int main() {
    string music_string = "o o| .| o| o| .| .| .| .| o o";
    vector<int> parsed_music = parse_music(music_string);
    for (int beat : parsed_music) {
        cout << beat << " ";
    }
    cout << endl;
    return 0;
}