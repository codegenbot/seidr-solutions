#include <algorithm>
#include <cassert>
#include <vector>
#include <string>

using namespace std;

bool issame(const vector<int>& a, const vector<int>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    return equal(a.begin(), a.end(), b.begin());
}

vector<int> parse_music(string music_string);

int main() {
    assert(issame(parse_music("o|.|o|.|oo|oo|"), vector<int>({2, 1, 2, 1, 2, 2, 4, 2})));
    return 0;
}

vector<int> parse_music(string music_string) {
    vector<int> beats;
    int i = 0;

    while (i < music_string.size()) {
        if (music_string[i] == 'o' && music_string[i + 2] == '|') {
            beats.push_back(2);
            i += 3;
        } else if (music_string[i] == '.' && music_string[i + 2] == '|') {
            beats.push_back(1);
            i += 3;
        } else {
            beats.push_back(4);
            i++;
        }
    }
    return beats;
}