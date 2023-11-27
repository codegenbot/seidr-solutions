#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

vector<int> parse_music(string music_string);
bool issame(vector<int> a, vector<int> b);

vector<int> parse_music(string music_string){
    vector<int> beats;
    for(int i=0; i<music_string.length(); i++){
        if(music_string[i] == 'o'){
            beats.push_back(4);
        }
        else if(music_string[i] == '|'){
            if(music_string[i-2] == 'o'){
                beats.push_back(2);
            }
            else if(music_string[i-2] == '.'){
                beats.push_back(1);
            }
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
    assert (issame(parse_music("o| .| o| .| o o| o o|"), {4, 2, 1, 4, 2, 4, 2}));
    cout << "Test case passed!" << endl;
   
    return 0;
}