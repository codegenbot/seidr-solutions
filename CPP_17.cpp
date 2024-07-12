#include <vector>

vector<int> parse_music(string music_string);
bool issame(vector<int> a, vector<int> b);

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
    string music_string = "o|o|.||";
    vector<int> music_beats = parse_music(music_string);
    
    vector<int> pattern1 = {4, 2, 4, 1, 1};
    vector<int> pattern2 = {4, 2, 4, 1, 1};
    
    if (issame(music_beats, pattern1)) {
        cout << "Patterns match!" << endl;
    } else {
        cout << "Patterns do not match!" << endl;
    }
    
    if (issame(pattern1, pattern2)) {
        cout << "Patterns match!" << endl;
    } else {
        cout << "Patterns do not match!" << endl;
    }
    
    return 0;
}