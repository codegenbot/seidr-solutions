#include <iostream>
#include <vector>
#include <string>

bool issame(const vector<int>& a, const vector<int>& b) {
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

vector<int> parse_music(string music_string) {
    vector<int> beats;
    for (int i = 0; i < music_string.size(); ++i) {
        if (music_string[i] == 'o') {
            beats.push_back(4);
        } else if (music_string[i] == '|' && music_string[i - 1] == 'o') {
            beats.back() = 2;
        } else if (music_string[i] == '|' && music_string[i - 1] == '.') {
            beats.back() = 1;
        }
    }
    return beats;
}

int main() {
    string input;
    cin >> input;
    
    vector<int> parsed = parse_music(input);
    vector<int> expected = {4, 2, 1, 4}; // Define your expected output here

    if (issame(parsed, expected)) {
        cout << "Outputs match!" << endl;
    } else {
        cout << "Outputs do not match!" << endl;
    }

    return 0;
}