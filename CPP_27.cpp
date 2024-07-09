#include <cassert>
#include <string>

int flip_case(char* str) {
    std::string s(str);
    for (char & c : s) {
        if (c >= 'a' && c <= 'z') {
            c = c - ('a' - 'A');
        } else if (c >= 'A' && c <= 'Z') {
            c = c - ('A' - 'a');
        }
    }
    return std::string(s).c_str();
}

int main() {
    assert(flip_case("These violent delights have violent ends") == "tHESE VIOLENT DELIGHTS HAVE VIOLENT ENDS");
    return 0;
}