```cpp
#include <iostream>
#include <string>
#include <cassert>

std::string fix_spaces(std::string text) {
    if (text.empty()) {
        return "";
    }
    
    std::string result = "";
    int consecutiveSpaces = 0;
    for (int i = 0; i < text.length(); i++) {
        if (text[i] == ' ') {
            consecutiveSpaces++;
            if (consecutiveSpaces > 2) {
                result += "-";
            } else {
                result += "_";
            }
        } else {
            result.push_back(text[i]);
            consecutiveSpaces = 0;
        }
    }
    return result;
}

int main() {
    assert(fix_spaces("   Exa 1 2 2 mple") == "-Exa_1_2_2_mple");

    // Additional test cases
    assert(fix_spaces("Hello World") == "Hello_World");
    assert(fix_spaces("A___B___C") == "A-B-C");
    assert(fix_spaces("   ") == "---");
    assert(fix_spaces("") == "");

    std::cout << "All test cases passed" << std::endl;

    return 0;
}
```