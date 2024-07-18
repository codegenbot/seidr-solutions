#include <iostream>
#include <vector>

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

std::vector<int> parse_music(std::string music_string){
    std::vector<int> beats;
    int length = music_string.size();
    for (int i = 0; i < length; ++i) {
        if (music_string[i] == 'o') {
            beats.push_back(4);
        } else if (music_string[i] == '|') {
            if (i > 0 && music_string[i - 1] == 'o') {
                beats[beats.size() - 1] = 2;
            } else {
                beats.push_back(1);
            }
        }
    }
    return beats;
}

int main() {
    std::string music_string;
    std::cin >> music_string;
    std::vector<int> beats = parse_music(music_string);
    for (int beat : beats) {
        std::cout << beat << " ";
    }
    return 0;
}