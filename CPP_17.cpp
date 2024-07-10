#include <iostream>
#include <vector>
#include <string>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

std::vector<int> parse_music(std::string music_string);

int main() {
    std::string music = "o|o.|o";
    std::vector<int> parsed_music = parse_music(music);
    
    std::vector<int> expected_result = {4, 1, 4};
    
    if (issame(parsed_music, expected_result)) {
        std::cout << "Success" << std::endl;
    } else {
        std::cout << "Failure" << std::endl;
    }
    
    return 0;
}

std::vector<int> parse_music(std::string music_string){
    std::vector<int> result;
    int beats = 0;
    for (char c : music_string) {
        if (c == 'o') {
            beats = 4;
        } else if (c == '|') {
            result.push_back(beats);
            beats = 0;
        } else if (c == '.') {
            beats = 1;
        }
    }
    if (beats > 0) {
        result.push_back(beats);
    }
    return result;
}