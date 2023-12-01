#include <string>
#include <cassert>

size_t myStrlen(const std::string& str) {
    return str.length();
}

int main() {
    assert(myStrlen("asdasnakj") == 9);
    // Add more test cases if needed
    
    return 0;
}