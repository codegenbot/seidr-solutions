#include <vector>
#include <cassert>

bool issame(const vector<int>& a, const vector<int>& b);

vector<int> parse_music(string music_string);

bool issame(const vector<int>& a, const vector<int>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<int> parse_music(string music_string){
    vector<int> beats;
    for (size_t i = 0; i < music_string.size(); ++i) {
        if (music_string[i] == 'o') {
            beats.push_back(4);
        } else if (music_string[i] == '|') {
            if (music_string[i - 1] == 'o') {
                beats.back() = 2;
            } else {
                beats.back() = 1;
            }
        }
    }
    return beats;
}