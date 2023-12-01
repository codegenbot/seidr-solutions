#include <vector>
#include <string>
#include <cassert>

vector<int> parse_music(string music_string){
    vector<int> beats;
    string note;
    for(int i=0; i<music_string.length(); i+=3){
        note = music_string.substr(i, 3);
        if(note == "o  "){
            beats.push_back(4);
        }
        else if(note == "o| "){
            beats.push_back(2);
        }
        else if(note == ".| "){
            beats.push_back(1);
        }
    }
    return beats;
}

bool issame(vector<int> a, vector<int> b){
    // Implementation of the function
    return a == b;
}

int main(){
    assert(issame(parse_music("o| .| o| .| o o| o o|"), {2, 1, 2, 1, 4, 2, 4, 2}));

    return 0;
}