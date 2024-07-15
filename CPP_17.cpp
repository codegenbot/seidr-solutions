#include <vector>
#include <string>
#include <cassert>

std::vector<int> parse_music(std::string music_string){
    std::vector<int> beats;
    int note_duration = 0;
    for (char note : music_string) {
        if (note == 'o') {
            note_duration = 4;
        } else if (note == '|') {
            beats.push_back(note_duration);
            note_duration = 0;
        } else if (note == '.') {
            note_duration = 1;
        }
    }
    if (note_duration != 0) {
        beats.push_back(note_duration);
    }
    return beats;
}

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

int main(){
    assert(issame(parse_music("o| .| o| .| o o| o o|"), {2, 1, 2, 1, 4, 2, 4, 2}));
    return 0;
}