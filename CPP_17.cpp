#include <vector>
#include <cassert>

bool issame(vector<int> a, vector<int> b);

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

int main() {
    vector<int> a = parse_music("o.|..||");
    vector<int> b = {4, 1, 2, 0, 2};
    assert(issame(a, b));
    return 0;
}