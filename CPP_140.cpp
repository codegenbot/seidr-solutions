#include <string>

std::string fix_spaces(const std::string& text) {
    std::string result = "";
    int consecutiveSpaces = 0;
    for (char c : text) {
        if (c == ' ') {
            consecutiveSpaces++;
            if (consecutiveSpaces > 2) {
                result.pop_back();
                result.pop_back();
                result += "-";
            } else {
                result += "_";
            }
        } else {
            result += c;
            consecutiveSpaces = 0;
        }
    }
    return result;
}

int main() {
    assert(fix_spaces("Hello   world") == "Hello--world");
    assert(fix_spaces("I  love  coding") == "I_love--coding");
    assert(fix_spaces("Multiple    spaces  are      here") == "Multiple--spaces--are---here");
    
    return 0;
}