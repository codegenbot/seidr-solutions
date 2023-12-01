#include <vector>
#include <string>
#include <cassert>

std::vector<int> parse_music(std::string music_string){
    std::vector<int> beats;
    std::string note;
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

bool issame(std::vector<int> a, std::vector<int> b){
    // Implementation of the function
    return a == b;
}