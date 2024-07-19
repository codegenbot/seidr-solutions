```cpp
#include <string>
#include <cassert>

std::string fix_spaces(const std::string& text) {
    std::string result = "";
    for(size_t i = 0; i < text.length(); ++i) {
        char c = text[i];
        if (c == ' ') {
            if (!result.empty() && result.back() != ' ') {
                result += "%20";
            }
        } else {
            result += c;
        }
    }
    return result;
}

int main() {
    std::cout << fix_spaces("   Exa 1 2 2 mple");
}