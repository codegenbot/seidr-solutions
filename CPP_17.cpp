#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
#include <string>
#include <cstdlib>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    return std::equal(a.begin(), a.end(), b.begin());
}

std::vector<int> parse_music(std::string music_string) {
    std::vector<int> beats;
    int i = 0;

    while (i < music_string.size()) {
        if (music_string[i] == 'o' && music_string[i + 2] == '|') {
            beats.push_back(2);
            i += 3;
        } else if (music_string[i] == '.' && music_string[i + 2] == '|') {
            beats.push_back(1);
            i += 3;
        } else {
            beats.push_back(4);
            i++;
        }
    }
    return beats;
}

bool main() {
    assert(issame(parse_music("o|.|o|.|oo|oo|"), std::vector<int>({2, 1, 2, 1, 4, 2, 4, 2})));
    return true;
}