#include<stdio.h>
#include<vector>
#include<string>
using namespace std;

vector<int> parse_music(string music_string) {
    vector<int> result;
    for (char c : music_string) {
        if (c == 'o') {
            result.push_back(4);
        } else if (c == '|') {
            result.push_back(c == '|' ? 2 : 1);
        }
    }
    return result;
}