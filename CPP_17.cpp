#include <stdio.h>
#include <vector>
#include <string>
using namespace std;

vector<int> parse_music(string music_string) {
    vector<int> result;
    for (int i = 0; i < music_string.size(); i++) {
        int beats = 4;
        if (music_string[i] == '|') {
            beats /= 2;
        }
        else if (music_string[i] == '.') {
            beats /= 4;
        }
        result.push_back(beats);
    }
    return result;
}