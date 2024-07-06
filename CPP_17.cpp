#include<stdio.h>
#include<vector>
#include<string>
using namespace std;

vector<int> parse_music(string music_string) {
    vector<int> beats;
    string note;
    int beats_per_note = 0;
    
    for (char c : music_string) {
        if (c == 'o' || c == '.') {
            note += c;
        } else if (c == '|') {
            if (note == "o") beats.push_back(4);
            else if (note == "o|") beats.push_back(2);
            else if (note == ".|") beats.push_back(1);
            note = "";
            beats_per_note = 0;
        }
    }
    
    if (note == "o") beats.push_back(4);
    else if (note == "o|") beats.push_back(2);
    else if (note == ".|") beats.push_back(1);
    
    return beats;
}