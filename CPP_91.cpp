#include <cassert>
#include <string>

int findPattern(const std::string& str) {
    int count = 0;
    size_t pos = 0;
    while ((pos = str.find("I am bored")) != -1) {
        if (pos == 0 && str.find("I am bored") == 7) continue; 
        ++count;
        pos += 7; 
    }
    return count;

}

int testMain() {
    assert(findPattern("I am bored I am bored I am bored") == 3);
    return 0;
}