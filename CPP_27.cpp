#include <cctype>
#include <string>
#include <cassert>

int flip_case(const char* str) {
    int result = 0;
    for (char c : std::string(str)) {
        if (std::isalpha(c)) {
            if (std::tolower(c) <= 'z') {
                result -= (c - 'a' + 1);
            } else {
                result += (c - 'A' + 1);
            }
        }
    }
    return result;
}

int main() {
    assert(flip_case("These violent delights have violent ends") == 0);
    return 0;
}