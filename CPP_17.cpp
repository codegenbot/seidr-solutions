#include <stdio.h>
#include <vector>
#include <string>
using namespace std;

vector<int> parse_music(string music_string) {
    vector<int> result;
    for (int i = 0; i < music_string.size(); i++) {
        if (music_string[i] == 'o') {
            result.push_back(4);
        } else if (music_string[i] == 'o' && music_string[i+1] == '|') {
            result.push_back(2);
            i++; // skip the '|' character
        } else if (music_string[i] == '.' && music_string[i+1] == '|') {
            result.push_back(1);
            i++; // skip the '|' character
        }
    }
    return result;
}