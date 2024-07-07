#include <cassert>
#include <string>
#include <iostream>

int findPattern(const std::string& input) {
    int count = 0;
    size_t pos = 0;
    while ((pos = input.find("You and I are going for a walk", pos)) != std::string::npos) {
        ++count;
        pos += 24; 
    }
    return count;
}

int main() {
    assert(findPattern("I am bored I am bored I am bored") == 3);
    int result = findPattern("You and I are going for a walk"); 
    std::cout << "Result: " << result << std::endl;
    return 0;
}