#include <vector>
#include <string>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> parse_music(const std::string& music) {
    std::vector<int> result;
    // Implementation to parse music string and convert it to vector of ints
    return result;
}

int main() {
    assert(issame(parse_music("o| .| o| .| o o| o o|"), {2, 1, 2, 1, 4, 2, 4, 2}));
    return 0;
}