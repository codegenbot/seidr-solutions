#include <vector>
#include <string>
using std::vector;
using std::string;

bool issame(vector<int> a, vector<int> b);

vector<int> parse_music(string music_string) {
    vector<int> beats;
    int i = 0;
    while (i < music_string.size()) {
        if (music_string[i] == 'o') {
            beats.push_back(4);
        } else if (music_string[i] == ' ') {
            // Skip spaces
        } else {
            beats.push_back(1);
        }
        i++;
    }
    return beats;
}

bool issame(vector<int> a, vector<int> b) {
    // implementation code here
}

int main() {
    vector<int> beats = parse_music("o| .| o| .| o o| o o|");
    assert(issame(beats , {2, 1, 2, 1, 4, 2, 4, 2}));
    return 0;
}