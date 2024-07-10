#include <vector>
#include <string>
#include <cassert>

using namespace std;

vector<int> parse_music(string music_string){
    vector<int> beats;
    int i = 0;
    while (i < music_string.size()) {
        if (music_string[i] == 'o') {
            beats.push_back(4);
            i += 2;
        } else if (music_string[i] == ' ' && music_string[i+1] == '|') {
            beats.push_back(2);
            i += 3;
        } else if (music_string[i] == '.' && music_string[i+1] == '|') {
            beats.push_back(1);
            i += 3;
        }
    }
    return beats;
}

bool issame(const vector<int>& a, const vector<int>& b){
    return a == b;
}

int main(){
    assert (issame(parse_music("o| .| o| .| o o| o o|"), {2, 1, 2, 1, 4, 2, 4, 2}));
    return 0;
}