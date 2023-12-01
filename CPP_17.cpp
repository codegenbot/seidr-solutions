#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

vector<int> parse_music(string music_string);

bool issame(vector<int> a, vector<int> b) {
    // code for comparing vectors
}

int main() {
    assert(issame(parse_music("o| .| o| .| o o| o o|"), {2, 1, 2, 1, 4, 2, 4, 2}));

    return 0;
}

vector<int> parse_music(string music_string){
    vector<int> beats;
    string note = "";
    for (int i = 0; i < music_string.length(); i++) {
        // code for parsing music string and adding beats to vector
    }
    return beats;
}