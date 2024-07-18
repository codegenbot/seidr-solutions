#include <iostream>
#include <vector>
#include <string>

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> parse_music(string music_string);

int main() {
    string input;
    getline(cin, input);
    vector<int> result = parse_music(input);
    for (int i = 0; i < result.size(); ++i) {
        cout << result[i] << " ";
    }
    return 0;
}

vector<int> parse_music(string music_string){
    vector<int> beats;
    int length = music_string.size();
    for (int i = 0; i < length; ++i) {
        if (music_string[i] == 'o') {
            beats.push_back(4);
        } else if (music_string[i] == '|') {
            if (music_string[i - 1] == 'o') {
                beats[beats.size() - 1] = 2;
            } else {
                beats.push_back(1);
            }
        }
    }
    return beats;
}