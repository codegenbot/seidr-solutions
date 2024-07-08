#include <vector>
#include <string>
#include <iostream>

using namespace std;

vector<int> parse_music(string music_string);

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    string music_string;
    cin >> music_string;

    vector<int> beats = parse_music(music_string);

    for (int beat : beats) {
        cout << beat << " ";
    }

    return 0;
}

vector<int> parse_music(string music_string){
    vector<int> beats;
    int length = music_string.length();
    for (int i = 0; i < length; ++i) {
        if (music_string[i] == 'o') {
            beats.push_back(4);
        } else if (music_string[i] == '|') {
            if (music_string[i - 1] == 'o') {
                beats.back() = 2;
            } else {
                beats.push_back(1);
            }
        }
    }
    return beats;
}