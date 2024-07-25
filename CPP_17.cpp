#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> parse_music(string music_string) {
    vector<int> result;
    string note;
    
    for (char c : music_string) {
        note += c;
        
        if (note == "o" || note == "o|") {
            result.push_back(4);
            note.clear();
        } else if (note == ".|" || note == "|") {
            result.push_back(1);
            note.clear();
        }
    }
    
    return result;
}

int main() {
    string music = "o o| .| o| o| .| .| .| .| o o";
    vector<int> beats = parse_music(music);
    
    for (int beat : beats) {
        cout << beat << " ";
    }
    cout << endl;
    
    return 0;
}