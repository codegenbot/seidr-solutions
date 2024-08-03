#include <vector>
#include <string>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> parse_music(std::string s) {
    std::vector<int> result = {0};
    int count = 1;
    for (char c : s) {
        if (c == 'o')
            result.back()++;
        else if (c == '|')
            result.push_back(0);
        else if (c == '.')
            result.back()--;
    }
    if (result.back() == 0)
        result.pop_back();
    return result;
}

int main() {
    assert(issame(parse_music("o| .| o| .| o o| o o|"), {2, 1, 2, 1, 4, 2, 4, 2}));
    return 0;
}