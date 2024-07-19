#include <iostream>
#include <vector>
#include <string>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    return a == b;
}

std::vector<int> parse_music(std::string music_string){
    std::vector<int> beats;
    int i = 0;
    while (i < music_string.size()) {
        if (music_string[i] == 'o' && music_string[i + 1] == '|') {
            beats.push_back(2);
            i += 2;
        } else if (music_string[i] == '.' && music_string[i + 1] == '|') {
            beats.push_back(1);
            i += 2;
        } else if (music_string[i] == 'o') {
            beats.push_back(4);
            i++;
        }
    }
    return beats;
}

int main(){
    assert(issame(parse_music("o| .| o| .| o o| o o|"), std::vector<int>({2, 1, 2, 1, 4, 2, 4, 2})));
    return 0;
}