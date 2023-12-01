#include <vector> 

vector<int> parse_music(string music_string); 

bool issame(vector<int> a, vector<int> b){ 
    ...
}

int main(){
    assert(issame(parse_music("o | . | o | . | o o | o o |"), {2, 1, 2, 1, 4, 2, 4, 2})); 
    ...
}

vector<int> parse_music(string music_string){
    vector<int> beats;
    int i = 0;
    while(i < music_string.length()){
        if(music_string[i] == 'o'){
            beats.push_back(4);
            i += 2;
        }
        else if(music_string[i] == ' '){
            i++;
        }
        else{
            beats.push_back(1);
            i += 2;
        }
    }
    return beats;
}