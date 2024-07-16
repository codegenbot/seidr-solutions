#include <vector>
#include <string>
#include <cassert>

vector<int> parse_music(string music_string);

bool issame(const vector<int>& a, const vector<int>& b){
    return a == b;
}

int main(){
    assert(issame(parse_music("o| .| o| .| o o| o o|"), {2, 1, 2, 1, 4, 2, 4, 2}));
    return 0;
}

vector<int> parse_music(string music_string){
    vector<int> beats;
    int duration = 0;
    for (char c : music_string) {
        if (c == 'o') {
            duration = 4;
        } else if (c == '|') {
            beats.push_back(duration);
            duration = 0;
        } else if (c == '.') {
            duration = 1;
        }
    }
    beats.push_back(duration);
    return beats;
}