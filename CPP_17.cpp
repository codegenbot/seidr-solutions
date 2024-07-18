#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> parse_music(string music_string){
    vector<int> beats;
    int length = music_string.length();
    for(int i=0; i<length; i+=2){
        if(music_string[i] == 'o'){
            beats.push_back(2);
        } else if(music_string[i] == '.'){
            beats.push_back(1);
        }
    }
    return beats;
}

int main(){
    assert(std::equal(parse_music("o| .| o| .| o o| o o|").begin(), parse_music("o| .| o| .| o o| o o|").end(), vector<int>{2, 1, 2, 1, 2, 2, 2, 2}.begin()));
    
    return 0;
}