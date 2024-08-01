#include <iostream>
#include <vector>
#include <string>
#include <cassert>

std::vector<int> parse_music(std::string music_string) {
    std::vector<int> result;
    size_t count = 0;
    for (char c : music_string) {
        if (c == 'o') {
            ++count;
        } else if (c == '|') {
            result.push_back(count);
            count = 0;
        }
    }
    return result;
}