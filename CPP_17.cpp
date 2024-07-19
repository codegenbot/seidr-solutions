#include <iostream>
#include <vector>
#include <cassert>

bool issame(vector<int> a, vector<int> b);

vector<int> parse_music(string music_string);

int main() {
    vector<int> expected = vector<int>({2, 1, 2, 1, 4, 2, 4, 2});
    vector<int> result = parse_music("o|o|..||o|o");
    assert(issame(expected, result));
    return 0;
}

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<int> parse_music(string music_string) {
    vector<int> beats;
    int i = 0;
    while (i < music_string.size()) {
        if (music_string[i] == 'o') {
            beats.push_back(4);
            i++;
        } else if (music_string[i] == 'o' && music_string[i + 1] == '|') {
            beats.push_back(2);
            i += 2;
        } else if (music_string[i] == '.' && music_string[i + 1] == '|') {
            beats.push_back(1);
            i += 2;
        }
    }
    return beats;
}