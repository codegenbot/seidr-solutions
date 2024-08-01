#include <iostream>
#include <vector>
#include <cassert>

std::vector<int> parse_music(std::string music_string) {
    // Implementation omitted for brevity
}

bool issame(std::vector<int> a, std::vector<int> b) {
    // Implementation omitted for brevity
}

int main() {
    assert(issame(parse_music("o| .| o| .| o o| o o|"), {2, 1, 2, 1, 4, 2, 4, 2}));
    return 0;
}