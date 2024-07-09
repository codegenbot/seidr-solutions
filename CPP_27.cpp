```cpp
#include <string>
#include <cassert>

std::string flip_case(const std::string& s) {
    std::string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            c = (c >= 'a' && c <= 'z') ? toupper(c) : tolower(c);
        }
        result += c;
    }
    return result;
}

int main() {
    std::string s = "These violent delights have violent ends";
    assert(flip_case(s) == "tHESE vIOLENT dELIGHTS hAVE vIOLENT eNDS");
    return 0;
}