#include <vector>
#include <string>
#include <cassert>

std::vector<int> parse_music(std::string music_string) {
    std::vector<int> result;
    std::string delimiter = "| ";
    size_t pos = 0;
    while ((pos = music_string.find(delimiter)) != std::string::npos) {
        std::string token = music_string.substr(0, pos);
        if (token == "o")
            result.push_back(2);
        else if (token == ".")
            result.push_back(1);
        music_string.erase(0, pos + delimiter.length());
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

void main() {
    assert(issame(parse_music("o| .| o| .| o o| o o|"),
                   {2, 1, 2, 1, 2, 2, 2, 2}));
}