#include<vector>
#include<string>
using namespace std;

vector<int> parse_music(string music_string) {
    vector<int> beats;
    char prev_note = ' ';

    for (char note : music_string) {
        if (note == 'o' && prev_note == ' ') {
            beats.push_back(4);
        } else if (note == 'o' && prev_note == '|') {
            beats.push_back(2);
        } else if (note == '.') {
            beats.push_back(1);
        }
        
        prev_note = note;
    }

    return beats;
}