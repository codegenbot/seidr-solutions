#include <iostream>
#include <vector>
#include <cassert>

std::vector<int> parse_music(std::string music) {
    std::vector<int> result;
    int count = 0;
    for (char c : music) {
        if (c == 'o') {
            count++;
        } else if (c == '|') {
            result.push_back(count);
            count = 0;
        }
    }
    if (count > 0) {
        result.push_back(count);
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