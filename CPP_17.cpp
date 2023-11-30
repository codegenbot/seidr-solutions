#include <iostream>
#include <vector>
#include <string>

std::vector<int> parse_music(std::string music_string) {
    std::vector<int> beats;
    std::string note;
    
    for (int i = 0; i < music_string.length(); i++) {
        if (music_string[i] == 'o') {
            if (note.length() > 0) {
                if (note == "o|") {
                    beats.push_back(2);
                } else if (note == ".|") {
                    beats.push_back(1);
                }
                note = "";
            }
            beats.push_back(4);
        } else {
            note += music_string[i];
        }
    }
    
    if (note.length() > 0) {
        if (note == "o|") {
            beats.push_back(2);
        } else if (note == ".|") {
            beats.push_back(1);
        }
    }
    
    return beats;
}

int main() {
    std::string music_string;
    std::cout << "Enter the music notes: ";
    std::getline(std::cin, music_string);
    
    std::vector<int> result = parse_music(music_string);
    
    std::cout << "[";
    for (int i = 0; i < result.size(); i++) {
        std::cout << result[i];
        if (i != result.size() - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "]" << std::endl;
    
    return 0;
}