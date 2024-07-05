#include <iostream>
#include <vector>
#include <string>
#include <cassert>
using namespace std;

vector<int> parse_music(string music_string) { 
    vector<int> beats;
    string note;
    for (char c : music_string) {
        if (c == ' ') {
            if (note == "o") beats.push_back(4);
            else if (note == "o|") beats.push_back(2);
            else if (note == ".|") beats.push_back(1);
            note = "";
        } else {
            note += c;
        }
    }
    if (note == "o") beats.push_back(4);
    else if (note == "o|") beats.push_back(2);
    else if (note == ".|") beats.push_back(1);
    return beats;
}

int main() {
    vector<int> expected = {2, 1, 2, 1, 4, 2, 4, 2};
    vector<int> result = parse_music("o| .| o| .| o o| o o|");
    assert(result == expected);
    cout << "All tests passed!" << endl;
    return 0;
}