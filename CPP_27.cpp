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
    assert(flip_case("These violent delights have violent ends") == "tHESE vIOLENT dELIGHTS hAVE vIOLENT eNDS");
}