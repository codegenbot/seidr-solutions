#include <iostream>
#include <vector>
#include <string>

bool issame(const vector<int>& a, const vector<int>& b);

vector<int> parse_music(string music_string){
    vector<int> beats;
    int note_duration = 0;
    
    for (char c : music_string) {
        if (c == 'o') {
            beats.push_back(note_duration + 1);
            note_duration = 3;
        } else if (c == '|') {
            beats.push_back(note_duration + 1);
            note_duration = 1;
        } else if (c == '.') {
            beats.push_back(note_duration + 1);
            note_duration = 0;
        }
    }
    
    beats.push_back(note_duration + 1);
    
    return beats;
}

int main() {
    string music_string;
    cin >> music_string;
    
    vector<int> result = parse_music(music_string);
    
    for (int beat : result) {
        cout << beat << " ";
    }
    
    return 0;
}