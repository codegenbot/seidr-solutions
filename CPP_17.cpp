#include <iostream>
#include <vector>
#include <string>

bool areEqual(std::vector<int> b, std::vector<int> c) {
    if (b.size() != c.size()) {
        return false;
    }
    
    for (int i = 0; i < b.size(); i++) {
        if (b[i] != c[i]) {
            return false;
        }
    }
    
    return true;
}

std::vector<int> parse_music(std::string music_string) {
    std::vector<int> beats;
    int i = 0;
    while (i < music_string.size()) {
        if (music_string[i] == 'o' && i + 1 < music_string.size() && music_string[i + 1] == '|') {
            beats.push_back(4);
            i += 2;
        } else if (music_string[i] == 'o') {
            beats.push_back(2);
            i++;
        } else if (music_string[i] == '.' && i + 1 < music_string.size() && music_string[i + 1] == '|') {
            beats.push_back(1);
            i += 2;
        }
    }
    return beats;
}

int main() {
    std::string music = "o|o|o|.";
    std::vector<int> result = parse_music(music);
    std::vector<int> expected = {4, 2, 4, 1};
    
    if (areEqual(result, expected)) {
        std::cout << "Test Passed!" << std::endl;
    } else {
        std::cout << "Test Failed!" << std::endl;
    }
    
    return 0;
}