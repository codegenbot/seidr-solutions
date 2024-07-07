```
#include <cassert>
#include <string>

int findPattern(const std::string& str) {
    int count = 0;
    size_t pos = 0;
    while ((pos = str.find("I am bored")) != std::string::npos) {
        ++count;
        pos += 7; // Move the position to the next occurrence
    }
    return count;

}

int main() {
    assert(findPattern("I am bored I am bored I am bored") == 3);
    int is_bored = findPattern("You and I are going for a walk");
    return 0;
}