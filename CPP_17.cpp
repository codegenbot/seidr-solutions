#include <vector>
#include <string>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b);

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
    assert(issame(parse_music("o| .| o| .| o o| o o|"), {2, 1, 2, 1, 4, 2, 4, 2}));
    
    return 0;
}