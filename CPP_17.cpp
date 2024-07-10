#include <iostream>
#include <vector>
#include <string>

using namespace std;

std::vector<int> parse_music(std::string music_string) {
    std::vector<int> beats;
    int i = 0;
    while (i < music_string.size() - 1) {
        if (music_string[i] == 'o' && music_string[i + 1] == '|') {
            beats.push_back(2);
            i += 3;
        } else if (music_string[i] == '.' && music_string[i + 1] == '|') {
            beats.push_back(1);
            i += 3;
        } else {
            beats.push_back(4);
            i += 2;
        }
    }
    return beats;
}