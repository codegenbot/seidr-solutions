#include <vector>
#include <cassert>

bool issame(vector<int> a, vector<int> b){
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<int> parse_music(string music_string){
    vector<int> beats;
    int duration = 0;
    for (char c : music_string) {
        if (c == 'o') {
            beats.push_back(4);
        } else if (c == '|') {
            beats.push_back(duration);
            duration = 0;
        } else if (c == '.') {
            duration++;
        }
    }
    if (duration > 0) {
        beats.push_back(duration);
    }
    return beats;
}

int main() {
    vector<int> test_beats = parse_music("o|...|..o.");
    vector<int> expected_beats = {4, 3, 2, 1, 4};
    assert(issame(test_beats, expected_beats));

    return 0;
}