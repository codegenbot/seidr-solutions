#include <iostream>
#include <vector>
#include <cassert>

std::vector<int> parse_music(const std::string& input) {
    std::vector<int> parsed;
    int count = 0;

    for (char c : input) {
        if (c == '|') {
            parsed.push_back(count);
            count = 0;
        } else if (c == 'o') {
            count++;
        }
    }

    if (count != 0) {
        parsed.push_back(count);
    }

    return parsed;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }

    for (size_t i = 0; i < a.size(); ++i) {
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