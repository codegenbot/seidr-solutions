#include <vector>
#include <string>
#include <cassert>

std::vector<int> parse_music(std::string music_string);

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> parse_music(std::string music_string) {
    std::vector<int> beats;
    int i = 0;
    while (i < music_string.size()) {
        if (music_string[i] == 'o') {
            beats.push_back(4);
            i++;
        } else if (music_string.substr(i, 2) == "o|") {
            beats.push_back(2);
            i += 2;
        } else if (music_string.substr(i, 2) == ".|") {
            beats.push_back(1);
            i += 2;
        }
    }
    return beats;
}

int main() {
    // Sample usage
    std::vector<int> beats = parse_music("o|o|.||");
    assert(issame(beats, {2, 4, 1, 1}));
    return 0;
}