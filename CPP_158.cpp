
#include <iostream>
#include <vector>
#include <string>
#include <cassert>

std::string find_max(const std::initializer_list<char>& words) {
    // ...
}

int main() {
    std::vector<char> words{"play", "play", "play"};
    assert((find_max(words) == "play"));
    return 0;
}