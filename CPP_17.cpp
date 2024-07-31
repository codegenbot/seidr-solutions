#include <iostream>
#include <vector>
#include <string>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> parse_music(std::string music_string) {
    std::vector<int> beats;
    std::string note = "";
    for (char c : music_string) {
        if (c == 'o') {
            note += c;
        } else if (c == '|') {
            if (note == "o") {
                beats.push_back(4);
            } else if (note == "o|") {
                beats.push_back(2);
            } else if (note == ".|") {
                beats.push_back(1);
            }
            note = "";
        }
    }
    if (!note.empty()) {
        if (note == "o") {
            beats.push_back(4);
        } else if (note == "o|") {
            beats.push_back(2);
        } else if (note == ".|") {
            beats.push_back(1);
        }
    }
    return beats;
}

int main() {
    std::string input_music = "o|o|o|";    
    std::vector<int> beats = parse_music(input_music);

    if (issame(beats, {2, 2, 2})) {
        std::cout << "Beats are the same." << std::endl;
    } else {
        std::cout << "Beats are different." << std::endl;
    }

    return 0;
}