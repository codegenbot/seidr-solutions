#include<iostream>
#include<vector>
#include<string>
#include<cassert>
using namespace std;

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
    vector<int> expected = {2, 1, 2, 1, 4, 2, 4, 2};
    vector<int> result = parse_music("o| .| o| .| o o| o o|");
    
    assert(result == expected);
    
    return 0;
}