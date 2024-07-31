#include <cassert>
#include <string>

int filp_case(const char* str) {
    int result = 0;
    for (char c : std::string(str)) {
        if (c >= 'a' && c <= 'z') {
            result -= (c - 'a' + 1);
        } else if (c >= 'A' && c <= 'Z') {
            result += (c - 'A' + 1);
        }
    }
    return result;

}

int main() {
    int result = filp_case("These violent delights have violent ends");
    assert(result == 0);
}