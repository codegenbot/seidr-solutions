#include <iostream>
#include <vector>
#include <string>

vector<int> parse_music(string music_string) { 
    vector<int> beats;
    int length = music_string.length();
    for (int i = 0; i < length; i+=3) {
        string note = music_string.substr(i, 3);
        if (note == "o  ") {
            beats.push_back(4);
        } else if (note == "o| ") {
            beats.push_back(2);
        } else if (note == ".| ") {
            beats.push_back(1);
        }
    }
    return beats;
}