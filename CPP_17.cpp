#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> parse_music(string music_string) {
    vector<int> beats;
    for (int i = 0; i < music_string.size(); i++) {
        if (music_string[i] == 'o') {
            beats.push_back(4);
        } else if (music_string[i] == '|') {
            if (i + 1 < music_string.size() && music_string[i+1] == '.') {
                beats.push_back(1);
                i++;
            } else {
                beats.push_back(2);
            }
        }
    }
    return beats;
}

int main() {
    string s = "o o| .| o| o| .| .| .| .| o o";
    vector<int> result = parse_music(s);
    for (int beat : result) {
        cout << beat << " ";
    }
    return 0;
}