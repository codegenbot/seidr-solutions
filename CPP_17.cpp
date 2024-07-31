#include <vector>
#include <string>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> parse_music(std::string music_string) {
    std::vector<int> beats;
    for (char c : music_string) {
        if (c == 'o'){
            beats.push_back(4);
        } else if (c == '|') {
            beats.back() = 2;
        } else {
            beats.back() = 1;
        }
    }
    return beats;
}

int main() {
    std::vector<int> expected = {4, 1, 2, 4};
    std::string music = "o|.o|";
    std::vector<int> parsed = parse_music(music);
    assert(issame(parsed, expected));

    assert(issame(parse_music("o|.o.o|."), {4, 1, 2, 4, 1, 4}));

    return 0;
}