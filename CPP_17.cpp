#include <iostream>
#include <vector>
#include <string>

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> parse_music(string music_string);

int main() {
    std::string input_music = "o o| .| o";
    std::vector<int> result = parse_music(input_music);
    for (int beat : result) {
        std::cout << beat << " ";
    }
    return 0;
}

vector<int> parse_music(string music_string){
    std::vector<int> beats;
    size_t pos = 0;
    std::string delimiter = " ";
    while ((pos = music_string.find(delimiter)) != std::string::npos) {
        std::string note = music_string.substr(0, pos);
        if (note == "o") {
            beats.push_back(4);
        } else if (note == "o|") {
            beats.push_back(2);
        } else if (note == ".|") {
            beats.push_back(1);
        }
        music_string.erase(0, pos + delimiter.length());
    }
    return beats;
}