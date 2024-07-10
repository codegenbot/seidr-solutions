#include <iostream>
#include <vector>
#include <assert.h>

using namespace std;

vector<int> parse_music(string music_string);

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
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
    vector<int> test1 = {1, 2, 1};
    vector<int> test2 = parse_music("o|.o");
    assert(issame(test1, test2));

    return 0;
}