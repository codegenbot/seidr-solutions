#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

vector<int> parse_music(string music_string);

bool issame(vector<int>& a, const vector<int>& b){
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
            if (beats > 0) {
                result.push_back(beats);
            }
            beats = 1;
        }
    }
    if (beats > 0) {
        result.push_back(beats);
    }
    return result;
}

int main() {
    string music_string;
    cin >> music_string;

    vector<int> notes = parse_music(music_string);
    vector<int> reference = {1, 2, 3, 4};

    if(issame(notes, reference)) {
        cout << "Music is correct" << "\n";
    } else {
        cout << "Music is incorrect" << "\n";
    }

    return 0;
}