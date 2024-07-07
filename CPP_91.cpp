```cpp
#include <cassert>
#include <string>

int findPattern(const std::string& str) {
    int count = 0;
    size_t pos = 0;
    while ((pos = str.find("I am bored")) != std::string::npos) {
        ++count;
        pos += 7; // Move to the next occurrence
    }
    return count;
}

int testMain() {
    assert(findPattern("I am bored I am bored I am bored") == 3);
    return 0;
}