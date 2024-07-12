#include <vector>

vector<int> parse_music(string music_string) {
    vector<int> beats;
    int i = 0;
    while (i < music_string.size()) {
        if (music_string[i] == 'o') {
            beats.push_back(4);
            i++;
        } else if (music_string.substr(i, 2) == "o|") {
            beats.push_back(2);
            i += 2;
        } else if (music_string.substr(i, 2) == ".|") {
            beats.push_back(1);
            i += 2;
        }
    }
    return beats;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    vector<int> music1 = parse_music("o|o|o|");
    vector<int> music2 = parse_music("ooo||");
    if (issame(music1, music2)) {
        // Perform desired action when music sequences are the same
    }
    return 0;
}