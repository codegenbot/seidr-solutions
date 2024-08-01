#include <iostream>
#include <vector>
#include <string>
#include <cassert>

std::vector<int> parse_music(std::string music_string) {
    std::vector<int> result;
    size_t pos = 0;
    while ((pos = music_string.find("|")) != std::string::npos) {
        std::string token = music_string.substr(0, pos);
        int count = (token == "o") ? 2 : 1;
        result.push_back(count);
        music_string.erase(0, pos + 1);
    }
    if (!music_string.empty()) {
        int count = (music_string == "o") ? 2 : 1;
        result.push_back(count);
    }
    return result;
}