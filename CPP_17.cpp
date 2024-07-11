#include <iostream>
#include <vector>
#include <string>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> parse_music(std::string music) {
    std::vector<int> result;
    int count = 0;
    for (char c : music) {
        if (c == ' ')
            continue;
        else if (c == 'o')
            count++;
        else if (c == '|') {
            result.push_back(count);
            count = 0;
        }
    }
    return result;
}

int main() {
    assert(issame(parse_music("o| .| o| .| o o| o o|"), {2, 1, 2, 1, 4, 2, 4, 2}));
    
    return 0;
}