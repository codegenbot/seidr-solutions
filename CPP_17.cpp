#include <iostream>
#include <vector>
#include <string>

std::vector<int> parse_music(std::string music_string);

bool issame(std::vector<int> v1, std::vector<int> v2);

int main() {
    std::string music_string = "o||o|o";
    std::vector<int> beats = parse_music(music_string);
    
    std::vector<int> expected_beats = {4, 2, 1, 4};
    
    if (issame(beats, expected_beats)) {
        std::cout << "Output is correct." << std::endl;
    } else {
        std::cout << "Output is incorrect." << std::endl;
    }
    
    return 0;
}

std::vector<int> parse_music(std::string music_string){ 
    std::vector<int> beats;
    for (int i = 0; i < music_string.size(); ++i) {
        if (music_string[i] == 'o') {
            beats.push_back(4);
        } else if (music_string[i] == '|' && music_string[i - 1] == 'o') {
            beats.back() = 2;
        } else if (music_string[i] == '|' && music_string[i - 1] == '.') {
            beats.back() = 1;
        }
    }
    return beats;
}

bool issame(std::vector<int> v1, std::vector<int> v2) {
    return v1 == v2;
}