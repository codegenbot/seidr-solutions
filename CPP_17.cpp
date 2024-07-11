#include <vector>
#include <string>
#include <cassert>

std::vector<int> parse_music(std::string music) {
    std::vector<int> result;
    int count = 0;

    for (char c : music) {
        if (c == '|' || c == ' ') {
            result.push_back(count);
            count = 0;
        } else if (c == 'o') {
            count++;
        }
    }

    if (count > 0)
        result.push_back(count);

    return result;
}

bool issame(std::vector<int> a, std::vector<int> b); 

int main() {
    assert(issame(parse_music("o| .| o| .| o o| o o|"), {2, 1, 2, 1, 4, 2, 4, 2}));
}

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size())
        return false;

    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i])
            return false;
    }

    return true;
}