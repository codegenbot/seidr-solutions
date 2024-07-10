#include <vector>
#include <string>
#include <iostream>
#include <assert.h>

bool issame(std::vector<int> a, std::vector<int> b);

std::vector<int> parse_music(std::string music_string) {
    std::vector<int> beats;
    std::string note;
    for (char c : music_string) {
        if (c == 'o') {
            note += c;
            beats.push_back(4);
        } else if (c == '|') {
            if (note == "o") {
                beats.back() = 2;
            } else {
                beats.back() = 1;
            }
            note = "";
        } else if (c == '.') {
            beats.push_back(1);
        }
    }
    return beats;
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
    std::vector<int> a = {1, 2, 3};
    std::vector<int> b = {1, 2, 3};
    std::vector<int> c = {1, 2, 4};

    assert(issame(a, b));
    assert(!issame(a, c));

    return 0;
}