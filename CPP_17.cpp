#include <vector>
#include <cassert>

vector<int> parse_music(string music_string) {
    vector<int> beats;
    int length = music_string.length();
    for(int i=0; i<length; i+=3){
        if(music_string[i] == 'o'){
            beats.push_back(2);
        } else if(music_string[i] == '.'){
            beats.push_back(1);
        }
    }
    return beats;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(parse_music("o| .| o| .| o o| o o|"), {2, 1, 2, 1, 4, 2, 4, 2}));
    return 0;
}