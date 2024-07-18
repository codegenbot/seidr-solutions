#include <iostream>
#include <vector>

bool issame(vector<int> v1, vector<int> v2) {
    return std::equal(v1.begin(), v1.end(), v2.begin());
}

vector<int> parse_music(string music_string);

int main() {
    string music_string = "o|o.|o";
    vector<int> result = parse_music(music_string);
    for (int beat : result) {
        cout << beat << " ";
    }
    cout << endl;
    return 0;
}

vector<int> parse_music(string music_string) {
    vector<int> beats;
    size_t pos = 0;
    while ((pos = music_string.find("o", pos)) != string::npos) {
        if (music_string[pos + 1] == '|') {
            beats.push_back(2);
            pos += 2;
        } else {
            beats.push_back(4);
            pos++;
        }
    }
    pos = 0;
    while ((pos = music_string.find(".|", pos)) != string::npos) {
        beats.push_back(1);
        pos += 2;
    }
    return beats;
}