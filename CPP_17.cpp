#include <stdio.h>
#include <vector>
#include <string>
using namespace std;

vector<int> parse_music(string music_string) {
    vector<int> result;
    for (char c : music_string) {
        if (c == 'o') {
            result.push_back(4);
        } else if (c == '|') {
            if (result.back() > 0) {
                result.back() /= 2;
            }
        } else if (c == '.') {
            if (result.back() > 0) {
                result.back()--;
            }
        }
    }
    return result;
}