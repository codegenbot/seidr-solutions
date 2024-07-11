#include <vector>
#include <string>
#include <cassert>

std::vector<int> parse_music(std::string music_string) {
    // Implement the parse_music function
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(parse_music("o| .| o| .| o o| o o|"), {2, 1, 2, 1, 4, 2, 4, 2}));
    return 0;
}