#include <vector>
#include <string>
#include <assert.h>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> parse_music(string music_string){
    vector<int> beats;
    string note;
    for (char c : music_string) {
        if (c == 'o') {
            note += c;
            beats.push_back(4);
        } else if (c == '|') {
            if (note == "o") {
                beats.back() = 2;
            } else {
                beats.back() = 1;
            }
            note = "";
        } else if (c == '.') {
            beats.push_back(1);
        }
    }
    return beats;
}

int main() {
    assert(issame(parse_music("o|.o|."), {4, 2, 4, 1}));
    assert(issame(parse_music("o."), {4, 1}));
    assert(issame(parse_music("||"), {}));
    return 0;
}