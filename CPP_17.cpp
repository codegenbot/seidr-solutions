#include <vector>
#include <string>
#include <cassert>

bool is_same(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> parse_music(std::string music_string) {
    std::vector<int> beats;
    int i = 0;
    while (i < music_string.size()) {
        if (music_string[i] == 'o' && music_string[i + 1] == '|') {
            beats.push_back(2);
            i += 2;
        } else if (music_string[i] == '.') {
            i++;
        } else if (music_string[i] == '|') {
            i++;
        } else {
            beats.push_back(1);
            i++;
        }
    }
    return beats;
}

int main() {
    std::vector<int> a = {1, 2, 1};
    std::vector<int> b = parse_music("o|o");
    assert(is_same(a, b));
    return 0;
}