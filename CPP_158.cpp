#include <iostream>
#include <string>
#include <cassert>

int main() {
    std::string words[] = {"play", "play", "play"};
    assert((find_max(words, 3) == "play"));
    return 0;
}