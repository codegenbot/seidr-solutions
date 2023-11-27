#include <iostream>
#include <vector>
#include <assert.h>

using namespace std;

vector<int> parse_music(string music_string){
    vector<int> beats;
    string note = "";
    for (int i = 0; i < music_string.length(); i++) {
        if (music_string[i] == 'o') {
            if (music_string[i + 1] == '|') {
                beats.push_back(2);
                i++;
            } else {
                beats.push_back(4);
            }
        } else if (music_string[i] == '.') {
            beats.push_back(1);
        }
    }
    return beats;
}

int main() {
    assert(parse_music("o| .| o| .| o o| o o|") == vector<int>({2, 1, 2, 1, 4, 2, 4, 2}));
    return 0;
}