#include <iostream>
#include <vector>

std::vector<int> parse_music(std::string music_string) {
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

bool issame(std::vector<int>& a, std::vector<int>& b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    std::string music_string;
    std::cin >> music_string;

    std::vector<int> notes = parse_music(music_string);
    std::vector<int> reference = {1, 2, 3, 4};

    if(issame(notes, reference)) {
        std::cout << "Music is correct" << std::endl;
    } else {
        std::cout << "Music is incorrect" << std::endl;
    }

    return 0;
}