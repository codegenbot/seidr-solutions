#include <cassert>
#include <string>

std::string flip_case(const std::string& input) {
    std::string result;
    for (char c : input) {
        if (isalpha(c)) {
            if (islower(c))
                result += toupper(c);
            else
                result += tolower(c);
        } else
            result += c;
    }
    return result;
}

int testMain() {
    std::string expected = "theSE Violent Delights Have Violent Ends";
    assert(flip_case("These violent delights have violent ends").compare(expected) == 0);
    return 0;
}