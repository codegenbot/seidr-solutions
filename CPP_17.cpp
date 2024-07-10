#include <iostream>
#include <vector>

std::vector<int> parse_music(std::string music_string);

bool issame(const std::vector<int>& v1, const std::vector<int>& v2);

bool issame(const std::vector<int>& v1, const std::vector<int>& v2) {
    if (v1.size() != v2.size()) {
        return false;
    }
    for (int i = 0; i < v1.size(); ++i) {
        if (v1[i] != v2[i]) {
            return false;
        }
    }
    return true;
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
    std::string input_music = "o||o";
    std::vector<int> parsed_music = parse_music(input_music);
    
    std::vector<int> expected_output = {4, 1, 1, 4};
    
    if (issame(parsed_music, expected_output)) {
        std::cout << "Output matches expected." << std::endl;
    } else {
        std::cout << "Output does not match expected." << std::endl;
    }
    
    return 0;
}