#include <cassert>
#include <string>

int flip_case(const char* str) {
    int result = 0;
    for (char c : std::string(str)) {
        if (c >= 'a' && c <= 'z') {
            result -= (c - 'a' + 1);
        } else if (c >= 'A' && c <= 'Z') {
            result += (c - 'A' + 1);
        }
    }
    return 0;
}

int main() {
    assert(flip_case("These violent delights have violent ends") == 0);
    return 0;
}