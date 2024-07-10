#include <iostream>
#include <vector>

bool issame(const std::vector<int>& v1, const std::vector<int>& v2) {
    return v1 == v2;
}

std::vector<int> parse_music(std::string music_string) {
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

int main() {
    std::string music_string = "o||o|o.";
    std::vector<int> parsed_beats = parse_music(music_string);
    std::vector<int> expected_beats = {4, 1, 2, 4, 1};
    
    if (issame(parsed_beats, expected_beats)) {
        std::cout << "Parsed beats match expected beats." << std::endl;
    } else {
        std::cout << "Parsed beats do not match expected beats." << std::endl;
    }
    
    return 0;
}