#include <vector>
#include <string>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<int> parse_music(string music_string) {
    vector<int> parsed_notes;
    int count = 0;

    for (char c : music_string) {
        if (c == 'o') count++;
        else if (c == ' ') {
            if (count > 0) { 
                parsed_notes.push_back(count);
                count = 0;
            }
        }
        else if (isdigit(c)) {
            parsed_notes.push_back(c - '0');
        }
    }

    if (count > 0) parsed_notes.push_back(count);

    return parsed_notes;
}

int main() {
    assert(issame(parse_music("o| .| o| .| o o| o o|"), {2, 1, 2, 1, 4, 2, 4, 2}));
    return 0;
}