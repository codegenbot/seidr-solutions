#include <iostream>
#include <vector>
#include <string>

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
    std::string music_input = "o||o|o.";
    std::vector<int> parsed_music = parse_music(music_input);
    std::vector<int> expected_output = {4, 1, 2, 4, 1};

    if (issame(parsed_music, expected_output)) {
        std::cout << "Output matches expected output." << std::endl;
    } else {
        std::cout << "Output does not match expected output." << std::endl;
    }

    return 0;
}