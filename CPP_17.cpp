#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

bool issame(vector<int>& a, vector<int> b){
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

vector<int> parse_music(string music_string){
    vector<int> result;
    int beats = 0;
    for (char c : music_string) {
        if (c == 'o') {
            beats = 4;
        } else if (c == '|') {
            result.push_back(beats);
            beats = 0;
        } else if (c == '.') {
            beats = 1;
        }
    }
    if (beats > 0) {
        result.push_back(beats);
    }
    return result;
}

int main(){
    assert(issame(parse_music("o| .| o| .| o o| o o|"), {4, 1, 4, 1, 4, 1, 4, 1}));
    cout << "Music is correct" << endl;
    return 0;
}