#include<stdio.h>
#include<vector>
#include<string>
using namespace std;
vector<int> parse_music(string music_string){
    vector<int> result;
    size_t pos = 0;
    while ((pos = music_string.find("o", pos)) != string::npos) {
        result.push_back(4);
        pos += 2; // skip the space following "o"
    }
    pos = 0;
    while ((pos = music_string.find("o|", pos)) != string::npos) {
        result.push_back(2);
        pos += 3; // skip the space following "o|"
    }
    pos = 0;
    while ((pos = music_string.find(".|", pos)) != string::npos) {
        result.push_back(1);
        pos += 3; // skip the space following ".|"
    }
    return result;
}