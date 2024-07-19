#include <iostream>
#include <vector>
using namespace std;

vector<int> parse_music(string music_string);

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
        if (music_string[i] == 'o' && i + 1 < music_string.size() && music_string[i + 1] == '|') {
            beats.push_back(4);
            i += 2;
        } else if (music_string[i] == 'o') {
            beats.push_back(2);
            i++;
        } else if (music_string[i] == '.' && i + 1 < music_string.size() && music_string[i + 1] == '|') {
            beats.push_back(1);
            i += 2;
        }
    }
    return beats;
}

int main() {
    vector<int> test_beats = parse_music("o|o|o|o|");
    vector<int> expected_beats = {4, 1, 4, 1};
    
    if (areEqual(test_beats, expected_beats)) {
        cout << "Test Passed!" << endl;
    } else {
        cout << "Test Failed!" << endl;
    }

    return 0;
}