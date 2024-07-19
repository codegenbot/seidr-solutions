#include <vector>
#include <cassert>

bool issame(const vector<int>& a, const vector<int>& b){
    if(a.size() != b.size()) {
        return false;
    }
    
    for(int i = 0; i < a.size(); ++i){
        if(a[i] != b[i]){
            return false;
        }
    }
    
    return true;
}

vector<int> parse_music(string music_string);

vector<int> parse_music(string music_string){
    vector<int> beats;
    int length = music_string.length();
    for(int i = 0; i < length; ++i){
        if(music_string[i] == 'o'){
            beats.push_back(4);
        } else if(music_string[i] == '|'){
            if(music_string[i-1] == 'o'){
                beats.back() = 2;
            } else {
                beats.push_back(1);
            }
        }
    }
    return beats;
}

int main(){
    assert(issame(parse_music("o| .| o| .| o o| o o|"), {2, 1, 2, 1, 4, 2, 4, 2}));
    
    return 0;
}