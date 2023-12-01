#include <vector>
#include <string>
#include <cassert>

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size())
        return false;
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i])
            return false;
    }
    return true;
}

vector<int> parse_music(string music_string){
    vector<int> beats;
    string note = "";
    for (int i = 0; i < music_string.length(); i++) {
        if (music_string[i] == 'o') {
            if (note == "o") {
                beats.push_back(4);
                note = "";
            } else {
                note = "o";
            }
        } else if (music_string[i] == '|') {
            if (note == "o") {
                beats.push_back(2);
                note = "";
            } else {
                beats.push_back(1);
                note = "";
            }
        } else if (music_string[i] == '.') {
            if (note == "o") {
                beats.push_back(2);
                note = "";
            } else {
                beats.push_back(1);
                note = "";
            }
        }
    }
    return beats;
}

int main() {
    assert(issame(parse_music("o| .| o| .| o o| o o|"), {2, 1, 2, 1, 4, 2, 4, 2}));
    return 0;
}