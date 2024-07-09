#include <cctype>
#include <cassert>

int flip_case(const std::string& input) {
    std::string output;
    for (char c : input) {
        if (isupper(c)) {
            output += tolower(c);
        } else if (islower(c)) {
            output += toupper(c);
        } else {
            output += c;
        }
    }
    return 0;
}

int main() {
    std::string output = flip_case("These violent delights have violent ends");
    assert(output == "THESE VIOLENT DELIGHTS HAVE VIOLENT ENDS");
    return 0;
}