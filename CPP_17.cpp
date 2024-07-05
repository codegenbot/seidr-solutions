#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<int> parse_music(string music_string);

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> parse_music(string music_string) { 
    vector<int> beats;
    size_t i = 0;
    while (i < music_string.size()) {
        if (music_string[i] == 'o') {
            if (i + 1 < music_string.size() && music_string[i + 1] == '|') {
                beats.push_back(2);
                i += 2;
            } else {
                beats.push_back(4);
                i++;
            }
        } else if (music_string[i] == '.' && i + 1 < music_string.size() && music_string[i + 1] == '|') {
            beats.push_back(1);
            i += 2;
        } else {
            i++;
        }
        if (i < music_string.size() && music_string[i] == ' ') i++;
    }
    return beats;
}

int main() {
    assert(issame(parse_music("o| .| o| .| o o| o o|"), {2, 1, 2, 1, 4, 2, 4, 2}));
    cout << "Test passed!" << endl;
    return 0;
}