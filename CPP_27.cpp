#include <cassert>
#include <string>

std::string flip_case(std::string str) {
    for (int i = 0; i < str.length(); i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= ('a' - 'A');
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += ('a' - 'A');
        }
    }
    return str;
}

int main() {
    std::string expected = "theSE Violent Delights Have Violent Ends";
    assert(flip_case("These violent delights have violent ends").compare(expected) == 0);
    return 0;
}