#include <iostream>
#include <vector>
#include <cassert>
#include <string>

std::vector<int> parse_music(std::string music_string) {
    std::vector<int> result;
    int count = 0;
    for (char c : music_string) {
        if (c == 'o') {
            count++;
        } else if (c == '|' || c == '.') {
            result.push_back(count);
            count = 0;
        }
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(issame(parse_music("o| .| o| .| o o| o o|"), {2, 1, 2, 1, 4, 2, 4, 2}));
    return 0;
}