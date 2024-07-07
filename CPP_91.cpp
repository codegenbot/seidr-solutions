```cpp
#include <cassert>
#include <string>

int findPattern(std::string& input) {
    int count = 0;
    size_t pos = 0;
    while ((pos = input.find("I am bored", pos)) != std::string::npos) {
        ++count;
        pos += 9; // increment by the length of "I am bored"
    }
    return count;
}

int main() {
    assert(findPattern("I am bored I am bored I am bored") == 3);
    std::string input = "You and I are going for a walk";
    int result = findPattern(input); 
    std::cout << "Result: " << result << std::endl;
    return 0;
}