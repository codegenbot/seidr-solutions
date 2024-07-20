#include <iostream>
#include <vector>

std::vector<int> parse_music(std::string music_string) {
    std::vector<int> beats;
    int i = 0;
    while (i < music_string.size()) {
        if (music_string[i] == 'o') {
            beats.push_back(4);
        } else if (music_string[i] == '|' && music_string[i + 1] == 'o') {
            beats.push_back(2);
            i++;
        } else if (music_string[i] == '|' && music_string[i + 1] == '.') {
            beats.push_back(1);
            i++;
        }
        i++;
    }
    return beats;
}

bool is_same(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    std::string music_string = "o|o|.|o";
    std::vector<int> expected_result = {4, 2, 1, 4};
    
    std::vector<int> result = parse_music(music_string);
    
    if (is_same(result, expected_result)) {
        std::cout << "Output matches expected result." << std::endl;
    } else {
        std::cout << "Output does not match expected result." << std::endl;
    }
    
    return 0;
}