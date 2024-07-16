#include <vector>
#include <string>
#include <cassert>

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> parse_music(string music_string){
    vector<int> beats;
    int len = music_string.size();
    for (int i = 0; i < len; ++i) {
        if (music_string[i] == 'o') {
            beats.push_back(4);
        } else if (music_string[i] == '|') {
            if (music_string[i - 1] == 'o') {
                beats.back() = 2;
            } else {
                beats.back() = 1;
            }
        }
    }
    return beats;
}

int main() {
    // Your main function logic here
    return 0;
}