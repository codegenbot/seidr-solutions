#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b);

vector<int> parse_music(string music_string){
    vector<int> beats;
    int length = music_string.length();
    for(int i=0; i<length; i+=3){ // Increment by 3 to skip the '|' character
        if(music_string[i] == 'o'){
            beats.push_back(4);
        } else if(music_string[i] == '.'){
            beats.push_back(1);
        }
    }
    return beats;
}

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

int main(){
    assert(issame(parse_music("o| .| o| .| o o| o o|"), {4, 1, 4, 1, 4, 4, 4, 4}));
    
    return 0;
}