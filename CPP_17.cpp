#include <vector>
#include <cassert>

vector<int> parse_music(string music_string);
bool issame(vector<int> a, vector<int> b);

vector<int> parse_music(string music_string){
    vector<int> beats;
    string note = "";
    
    for(int i=0; i<music_string.length(); i++){
        if(music_string[i] == 'o'){
            if(note == "o"){
                beats.push_back(4);
            }
            else if(note == "o|"){
                beats.push_back(2);
            }
            else if(note == ".|"){
                beats.push_back(1);
            }
            note = "o";
        }
        else if(music_string[i] == '|'){
            if(note == "o"){
                beats.push_back(4);
            }
            else if(note == "o|"){
                beats.push_back(2);
            }
            else if(note == ".|"){
                beats.push_back(1);
            }
            note = "";
        }
        else if(music_string[i] == '.'){
            if(note == "o"){
                beats.push_back(4);
            }
            else if(note == "o|"){
                beats.push_back(2);
            }
            else if(note == ".|"){
                beats.push_back(1);
            }
            note = ".|";
        }
    }
    
    return beats;
}

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    
    return true;
}

int main(){
    vector<int> music_beats = parse_music("o|.|o");
    vector<int> expected_beats = {4, 1, 4};
    
    assert(issame(music_beats, expected_beats));
    
    return 0;
}