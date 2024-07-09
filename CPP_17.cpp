#include <iostream>
#include <vector>
#include <assert.h>

using namespace std;

bool issame(vector<int> a, vector<int> b){
    return a == b;
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
    if (duration > 0) {
        beats.push_back(duration);
    }
    return beats;
}

int main() {
    assert (issame(parse_music("o| .| o| .| o o| o o|") , {2, 1, 2, 1, 4, 2, 4, 2}));
    
    return 0;
}