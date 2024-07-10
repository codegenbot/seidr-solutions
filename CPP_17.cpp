#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> parse_music(string music_string);

int main() {
    string input;
    cin >> input;
    vector<int> result = parse_music(input);
    for (int beat : result) {
        cout << beat << " ";
    }
    return 0;
}

vector<int> parse_music(string music_string){
    vector<int> beats;
    string note;
    for (char c : music_string) {
        if (c == 'o') {
            note += c;
            beats.push_back(4);
        } else if (c == '|') {
            if (note == "o") {
                beats.back() = 2;
            } else {
                beats.back() = 1;
            }
            note = "";
        } else if (c == '.') {
            beats.push_back(1);
        }
    }
    return beats;
}