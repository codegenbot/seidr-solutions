#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

std::vector<int> parse_music(std::string s) {
    std::vector<int> beats;
    int count = 0;
    for (char c : s) {
        if (c == 'o') count++;
        else if (c == '|') {
            beats.push_back(count);
            count = 0;
        }
    }
    if (count > 0) {
        beats.push_back(count);
    }
    return beats;
}

int main() {
    assert(issame(parse_music("o| .| o| .| o o| o o|"), {2, 1, 2, 1, 4, 2, 4, 2}));
    return 0;
}