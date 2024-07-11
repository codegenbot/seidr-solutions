#include <iostream>
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> parse_music(std::string music_string) {
    std::vector<int> beats;
    std::string note = "";
    for (char c : music_string) {
        if (c == 'o') {
            if (note == "o|") {
                beats.push_back(2);
            } else if (note == ".|") {
                beats.push_back(1);
            } else {
                beats.push_back(4);
            }
            note = "";
        } else {
            note += c;
        }
    }
    return beats;
}

int main() {
    // Add your test cases here to validate the code
    return 0;
}