#include <vector>

bool issame(std::vector<int> a, std::vector<int> b);

std::vector<int> parse_music(std::string music_string);

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> parse_music(std::string music_string){
    std::vector<int> beats;
    int length = music_string.length();
    for(int i = 0; i < length; ++i){
        if(music_string[i] == 'o'){
            beats.push_back(4);
        } else if(music_string[i] == '|'){
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
    assert(issame(parse_music("o| .| o| .| o o| o o|"), {2, 1, 2, 1, 4, 2, 4, 2}));
    
    return 0;
}