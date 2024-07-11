#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<int> parse_music(string music_string) {
    vector<int> parsed_music;
    size_t pos = 0;
    while ((pos = music_string.find("|", pos)) != string::npos) {
        if (pos > 0 && isdigit(music_string[pos - 1])) {
            parsed_music.push_back(music_string[pos - 1] - '0');
        }
        pos++;
    }
    return parsed_music;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(parse_music("o| .| o| .| o o| o o|"), {2, 1, 2, 1, 4, 2, 4, 2}));
    return 0;
}