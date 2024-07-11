#include <vector>
#include <cassert>
#include <string>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size())
        return false;
    
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i])
            return false;
    }
    
    return true;
}

std::vector<int> parse_music(const std::string& music) {
    std::vector<int> parsed;
    for (char c : music) {
        if (c == 'o') {
            parsed.push_back(1);
        } else if (c == '|') {
            parsed.push_back(0);
        } else if (c == ' ') {
            // Do nothing for space character
        }
    }
    return parsed;
}

int main() {
    assert(issame(parse_music("o|.o|.o o|o o|"), {2, 1, 2, 1, 4, 2, 4, 2}));
    // Add more test cases as needed
    return 0;
}