#include <string>
#include <cassert>

string fix_spaces(string text) {
    string result = "";
    int consecutiveSpaces = 0;
    for (char c : text) {
        if (c == ' ') {
            consecutiveSpaces++;
            if (consecutiveSpaces > 2) {
                result += "-";
                consecutiveSpaces = 0;
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
    assert(fix_spaces("Hello   world") == "Hello_-world");
    assert(fix_spaces("I  love  programming") == "I_-love_-programming");

    return 0;
}