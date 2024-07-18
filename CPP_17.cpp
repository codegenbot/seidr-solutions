#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> parse_music(string music_string){
    vector<int> beats;
    for(char c : music_string){
        if(c == 'o'){
            beats.push_back(4);
        } else if(c == '.'){
            beats.push_back(1);
        }
    }
    return beats;
}

int main(){
    assert(issame(parse_music("o| .| o| .| o o| o o|"), {4, 1, 4, 1, 4, 4, 4, 4}));
    
    return 0;
}