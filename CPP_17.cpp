#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> parse_music(string music_string){
    vector<int> beats;
    for (char c : music_string) {
        if (c == 'o') {
            beats.push_back(4);
        } else if (c == '|') {
            if (!beats.empty() && beats.back() == 4) {
                beats.back() = 2;
            } else {
                beats.push_back(1);
            }
        }
    }
    return beats;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    string music_string;
    cin >> music_string;

    vector<int> parsed_beats = parse_music(music_string);

    vector<int> test_beats = {2, 1, 2, 1, 4, 2, 4, 2}; // Adjust as per the test case
    
    if (issame(parsed_beats, test_beats)) {
        cout << "Match" << endl;
    } else {
        cout << "Mismatch" << endl;
    }

    return 0;
}