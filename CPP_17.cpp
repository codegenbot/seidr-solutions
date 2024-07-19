#include <iostream>
#include <vector>

bool areEqual(std::vector<int> a, std::vector<int> b) {
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

std::vector<int> parse_music(std::string music_string) {
    std::vector<int> beats;
    int i = 0;
    while (i < music_string.size()) {
        if (music_string[i] == 'o') {
            beats.push_back(4);
            i++;
        } else if (music_string[i] == 'o' && music_string[i + 1] == '|') {
            beats.push_back(2);
            i += 2;
        } else if (music_string[i] == '.' && music_string[i + 1] == '|') {
            beats.push_back(1);
            i += 2;
        } else {
            i++;
        }
    }
    return beats;
}

int main() {
    std::vector<int> a = {4, 2, 1};
    std::vector<int> b = parse_music("o|o|.");
    
    if (areEqual(a, b)) {
        std::cout << "Equal" << std::endl;
    } else {
        std::cout << "Not Equal" << std::endl;
    }
    
    return 0;
}