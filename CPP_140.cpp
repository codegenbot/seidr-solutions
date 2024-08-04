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
    assert(fix_spaces("Hello   World") == "Hello_World");
    assert(fix_spaces("Nice day     today") == "Nice_day-today");
    
    return 0;
}