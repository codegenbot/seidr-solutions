#include <vector>
#include <string>

std::vector<int> parse_music(std::string music_string){
    std::vector<int> beats;
    std::string note = "";
    
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

bool issame(std::vector<int> a, std::vector<int> b){
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
    std::vector<int> result = parse_music("o| .| o| .| o o| o o|");
    
    assert(issame(result, {2, 1, 2, 1, 4, 2, 4, 2}));
    
    return 0;
}