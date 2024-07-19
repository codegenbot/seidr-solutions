#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool areEqual(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }

    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }

    return true;
}

vector<int> parse_music(string music_string) {
    vector<int> beats;
    int i = 0;
    while (i < music_string.size()) {
        if (music_string[i] == 'o' && music_string[i + 1] == '|') {
            beats.push_back(4);
            i += 2;
        } else if (music_string[i] == 'o') {
            beats.push_back(2);
            i++;
        } else if (music_string[i] == '.') {
            beats.push_back(1);
            i++;
        }
    }
    return beats;
}

int main() {
    string music_string;
    cin >> music_string;

    vector<int> result = parse_music(music_string);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}