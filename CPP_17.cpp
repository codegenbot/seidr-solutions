#include <vector>
#include <string>
using namespace std;

vector<int> parse_music(string music_string) {
    vector<int> beats;
    int current_beat = 0;

    for (char c : music_string) {
        if (c == 'o') {
            beats.push_back(4);
        } else if (c == '|') {
            beats.push_back(current_beat / 2);
        } else if (c == '.') {
            beats.push_back(current_beat / 4);
        }
    }

    return beats;
}