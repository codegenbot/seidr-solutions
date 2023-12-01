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
    vector<int> res1 = parse_music("o|o|o|");
    assert(issame(res1, {2, 1, 2, 1, 2, 1}));
    
    vector<int> res2 = parse_music("o|.");
    assert(issame(res2, {2, 1}));
    
    vector<int> res3 = parse_music("o|o.o|o|.");
    assert(issame(res3, {2, 1, 2, 4, 2, 1}));
    
    vector<int> res4 = parse_music("o|o|o|o|");
    assert(issame(res4, {2, 1, 2, 1, 2, 1, 2, 1}));
    
    return 0;
}