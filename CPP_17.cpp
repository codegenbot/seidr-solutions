#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

vector<int> parse_music(string music_string); // Function prototype

vector<int> parse_music(string music_string) {
    vector<int> beats;
    int i = 0;
    while (i < music_string.size()) {
        if (music_string[i] == 'o') {
            beats.push_back(4);
        } else if (music_string.substr(i, 2) == "o|") {
            beats.push_back(2);
            i++;
        } else if (music_string.substr(i, 2) == ".|") {
            beats.push_back(1);
            i++;
        }
        i++;
    }
    return beats;
}