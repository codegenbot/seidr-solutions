#include <iostream>
#include <vector>
#include <string>

bool issame(const vector<int>& first, const vector<int>& second) {
    if (first.size() != second.size()) {
        return false;
    }
    for (int i = 0; i < first.size(); ++i) {
        if (first[i] != second[i]) {
            return false;
        }
    }
    return true;
}

vector<int> parse_music(string music_string) {
    vector<int> beats;
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
    string input_music = "o||o|o.";
    vector<int> parsed_music = parse_music(input_music);
    vector<int> expected_music = {4, 2, 1, 4, 1};
    
    if (issame(parsed_music, expected_music)) {
        std::cout << "Parsed music matches expected music." << std::endl;
    } else {
        std::cout << "Parsed music does not match expected music." << std::endl;
    }
    
    return 0;
}