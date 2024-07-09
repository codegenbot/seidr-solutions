#include <string>
#include <vector>

using namespace std;

vector<int> parse_music(string music_string) {
    vector<int> beats;
    int current_beats = 0;
    char previous_note = 'o';
    
    for (char note : music_string) {
        if (note == 'o') {
            current_beats += 4;
        } else if (note == '|') {
            switch (previous_note) {
                case '.':
                    current_beats++;
                    break;
                case 'o':
                    current_beats += 2;
                    break;
            }
        } else if (note == '.') {
            current_beats = 1;
        }
        
        previous_note = note;
    }
    
    beats.push_back(current_beats);
    return beats;
}