#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> parse_music(std::string music) {
    std::vector<int> result;
    size_t pos = 0;
    while ((pos = music.find("|")) != std::string::npos) {
        result.push_back(pos);
        music.erase(0, pos + 1);
    }
    return result;
}

int main() {
    assert(issame(parse_music("o| .| o| .| o o| o o|"), {2, 1, 2, 1, 4, 2, 4, 2}));
    return 0;
}