#include <cassert>
#include <string>

int findPattern(const char* str) {
    std::string s = str;
    int count = 0;
    size_t pos = 0;
    while ((pos = s.find("I am bored")) != std::string::npos) {
        ++count;
        pos += 7; // Move the position to the next occurrence
    }
    return count;

}

int main() {
    assert(findPattern("I am bored I am bored I am bored") == 3);
    int result = findPattern("You and I are going for a walk");
    std::cout << "Result: " << result << std::endl;
    return 0;