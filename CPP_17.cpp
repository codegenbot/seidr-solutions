#include <vector>
#include <string>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> parse_music(std::string s) {
    std::vector<int> notes;
    int count = 0;

    for (char c : s) {
        if (c == 'o') {
            count++;
        } else if (c == '|') {
            notes.push_back(count);
            count = 0;
        }
    }

    return notes;
}

int main() {
    assert(issame(parse_music("o| .| o| .| o o| o o|"), {2, 1, 2, 1, 4, 2, 4, 2}));
    return 0;
}