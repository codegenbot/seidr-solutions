#include<iostream>
#include<vector>
#include<string>
#include<cassert>
using namespace std;

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> parse_music(string music_string){
    vector<int> notes;
    int count = 0;
    for(char c : music_string){
        if(c == 'o'){
            count++;
        } else if(c == '|'){
            notes.push_back(count);
            count = 0;
        }
    }
    return notes;
}

int main(){
    assert(issame(parse_music("o| .| o| .| o o| o o|"), {2, 1, 2, 1, 4, 2, 4, 2}));
    
    return 0;
}