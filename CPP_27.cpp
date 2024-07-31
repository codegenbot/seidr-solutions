```cpp
#include <cassert>
#include <string>

int flip_case(const char* str) {
    std::string s = str;
    for (char& c : s) {
        if (c >= 'a' && c <= 'z') {
            c = 'A' + ((c - 'a'));
        } else if (c >= 'A' && c <= 'Z') {
            c = 'a' + ((c - 'A'));
        }
    }
    return 0;
}

int main() {
    const std::string str = "These violent delights have violent ends";
    assert(flip_case(str.c_str()) == "tHEse ViOlent DeLiGhTs HaVe ViOlent EnDs");
    return 0;
}