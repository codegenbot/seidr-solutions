#include <vector>
#include <iostream>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> parse_music(std::string music_string){
    std::vector<int> beats;
    int length = music_string.length();
    for (int i = 0; i < length; i += 3) {
        if (music_string[i] == 'o') {
            beats.push_back(4);
        } else if (music_string[i + 1] == '|') {
            beats.push_back(2);
        } else {
            beats.push_back(1);
        }
    }
    return beats;
}

int main() {
    std::vector<int> parsed_music = parse_music("o| .| o| .| o o| o o|");
    std::vector<int> expected_output = {2, 1, 2, 1, 4, 2, 4, 2};

    assert(issame(parsed_music, expected_output));
    std::cout << "Output is correct!" << std::endl;

    return 0;
}