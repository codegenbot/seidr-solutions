#include <iostream>
#include <string>
#include <vector>
#include <cassert>

std::string find_max(const std::vector<std::string>& words) {
    assert((find_max({"play", "play", "play"}) == "play"));
    auto it = words.begin();
    char max_char = (*it)[0];
    for (++it; it != words.end(); ++it) {
        if ((*it)[0] > max_char) {
            max_char = (*it)[0];
        }
    }
    return std::string(1, max_char);
}

int main() {
    find_max({"play", "play", "play"});
    return 0;
}