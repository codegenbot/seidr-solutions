#include <vector>
#include <string>
#include <cassert>

std::vector<int> parse_music(std::string music) {
    std::vector<int> result;
    int count = 0;
    for (char c : music) {
        if (c == ' ')
            continue;
        else if (c == 'o')
            count++;
        else if (c == '|') {
            result.push_back(count);
            count = 0;
        }
    }
    return result;
}