#include <vector>

using namespace std;

vector<int> parse_music(string music_string){
    vector<int> beats;
    for(int i=0; i<music_string.length(); i++){
        if(music_string[i] == 'o' && music_string[i+1] == '|'){
            beats.push_back(2);
            i++;
        }
        else if(music_string[i] == '.' && music_string[i+1] == '|'){
            beats.push_back(1);
            i++;
        }
        else if(music_string[i] == 'o'){
            beats.push_back(4);
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
    assert(issame(parse_music("o| .| o| .| o o| o o|"), {2, 1, 2, 1, 4, 2, 4, 2}));
    return 0;
}