#include <vector>
#include <string>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    return a == b;
}

std::vector<int> parse_music(const std::string& s) {
    std::vector<int> result;
    int count = 0;

    for (char c : s) {
        if (c == 'o') {
            count += 2;
        } else if (c == '.') {
            count += 1;
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

int main() {
    assert(issame(parse_music("o| .| o| .| o o| o o|"), std::vector<int>({2, 1, 2, 1, 4, 2, 4, 2})));
    return 0;
}