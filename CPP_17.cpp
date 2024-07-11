#include <vector>
#include <string>
#include <cassert>

std::vector<int> parse_music(std::string music_string) {
    std::vector<int> result;
    size_t i = 0;
    while (i < music_string.size()) {
        if (music_string[i] == 'o') {
            result.push_back(2);
            i += 2;
        } else if (music_string[i] == '.') {
            result.push_back(1);
            i += 2;
        } else if (music_string[i] == ' ') {
            i += 1;
        }
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(parse_music("o| .| o| .| o o| o o|"), {2, 1, 2, 1, 4, 2, 4, 2}));
    return 0;
}