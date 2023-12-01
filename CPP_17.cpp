#include <vector>
#include <string>

std::vector<int> parse_music(std::string music_string){
    std::vector<int> beats;
    std::string note = "";
    
    for(int i=0; i < music_string.length(); i++){
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