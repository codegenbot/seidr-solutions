#include <vector>
#include <string>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> parse_music(std::string s) {
    std::vector<int> result;
    // Implementation of parse_music function here
    return result;
}

int main() {
    assert(issame(parse_music("o| .| o| .| o o| o o|"), {2, 1, 2, 1, 4, 2, 4, 2}));
    return 0;
}