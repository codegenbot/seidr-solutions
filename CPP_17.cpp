#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

vector<int> parse_music(string music_string){
    vector<int> beats;
    int length = music_string.length();
    for(int i = 0; i < length; ++i){
        if(music_string[i] == 'o'){
            beats.push_back(4);
        } else if(music_string[i] == '| 
 
            if(music_string[i-1] == 'o'){
                beats.back() = 2;
            } else {
                beats.back() = 1;
            }
        }
    }
    return beats;
}

int main(){
    assert(parse_music("o| .| o| .| o o| o o|") == vector<int>{2, 1, 2, 1, 4, 2, 4, 2});
    
    return 0;
}