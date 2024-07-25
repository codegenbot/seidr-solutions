#include <stdio.h>
#include <vector>
#include <string>
using namespace std;

vector<int> parse_music(string music_string) {
    vector<int> beats;
    for (int i = 0; i < music_string.length(); ++i) {
        if (music_string[i] == 'o') {
            beats.push_back(4);
        } else if (music_string[i] == '|') {
            if (i+1 < music_string.length() && music_string[i+1] == '.') {
                beats.push_back(1);
                ++i;
            } else {
                beats.push_back(2);
            }
        }
    }
    return beats;
}