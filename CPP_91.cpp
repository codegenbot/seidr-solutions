#include <cstddef>
#include <string>
#include <cassert>

size_t findPattern(const std::string& input) {
    size_t count = 0;
    size_t pos = 0;
    while ((pos = input.find("I am bored", pos)) != std::string::npos) {
        if (pos == std::string::npos) break;
        count++;
        pos = input.find("I am bored", pos);
    }
    return count;

}

int mainTest() {
    assert(findPattern("You and I are going for a walk") == 0);
    return 0;
}